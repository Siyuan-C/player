#include "sql.h"
#include "connectiondialog.h"

#include <QtWidgets>
#include <QtSql>

Browser::Browser(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);


    table->addAction(insertRowAction);
    table->addAction(deleteRowAction);
    table->addAction(fieldStrategyAction);
    table->addAction(rowStrategyAction);
    table->addAction(manualStrategyAction);
    table->addAction(submitAction);
    table->addAction(revertAction);
    table->addAction(selectAction);

    if (QSqlDatabase::drivers().isEmpty())
        QMessageBox::information(this, tr("未发现数据库驱动"),
                                 tr("需要驱动"));

    emit statusMessage(tr("Ready."));
}

Browser::~Browser()
{
}

void Browser::exec()
{
    QSqlQueryModel *model = new QSqlQueryModel(table);
    model->setQuery(QSqlQuery(sqlEdit->toPlainText(), connectionWidget->currentDatabase()));
    table->setModel(model);

    if (model->lastError().type() != QSqlError::NoError)
        emit statusMessage(model->lastError().text());
    else if (model->query().isSelect())
        emit statusMessage(tr("成功"));
    else
        emit statusMessage(tr("成功，影响行数: %1").arg(
                           model->query().numRowsAffected()));

    updateActions();
}

QSqlError Browser::addConnection(const QString &driver, const QString &dbName, const QString &host,
                            const QString &user, const QString &passwd, int port)
{
    static int cCount = 0;

    QSqlError err;
    QSqlDatabase db = QSqlDatabase::addDatabase(driver, QString("Browser%1").arg(++cCount));
    db.setDatabaseName(dbName);
    db.setHostName(host);
    db.setPort(port);
    if (!db.open(user, passwd)) {
        err = db.lastError();
        db = QSqlDatabase();
        QSqlDatabase::removeDatabase(QString("Browser%1").arg(cCount));
    }
    connectionWidget->refresh();

    return err;
}

void Browser::addConnection()
{
    QSqlConnectionDialog dialog(this);
    if (dialog.exec() != QDialog::Accepted)
        return;

    if (dialog.useInMemoryDatabase()) {
        QSqlDatabase::database("in_mem_db", false).close();
        QSqlDatabase::removeDatabase("in_mem_db");
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "in_mem_db");
        db.setDatabaseName(":memory:");
        if (!db.open())
            QMessageBox::warning(this, tr("无法打开数据库"), tr("An error occurred while "
                                                                         "opening the connection: ") + db.lastError().text());
        QSqlQuery q("", db);
        q.exec("create table User (id integer primary key, name varchar)");
        q.exec("insert into User values(0,'csy')");
        q.exec("insert into User values(1,'admin'')");


        q.exec("create table Movies (mov_id integer primary key,Title varchar, CollectAddress varchar,year number,Rating number,name varvhar)");
        q.exec("insert into Movies values (0,'黑客帝国1', 'https://v.youku.com/v_show/id_XMzI3NDE4MTgw.html?source=baidu&refer=sousuotoufang_market.qrwang_00002944_000000_QJFFvi_19031900','1999', '9.1','csy')");
        q.exec("insert into Movies values (1, '人工智能', 'https://www.iqiyi.com/v_19rrno1q60.html?vfm=2008_aldbd&fc=828fb30b722f3164&fv=p_02_01','2001','8.9','csy')");
        q.exec("insert into Movies values (2, '模仿游戏', 'https://v.youku.com/v_show/id_XMTUyMTY4MzExMg==.html?spm=a2h1n.8261147.0.0&s=6618f85c420f11e3a705','2014', '8.7','csy')");
        q.exec("insert into Movies values (3, '表白大工', 'C:\\Users\\86131\\Desktop\\resource','2019', '10.0','admin')");
        q.exec("insert into Movies values (4, '大工宣传片','C:\\Users\\86131\\Desktop\\resource','2019', '9.9','admin')");

        q.exec("create table MoviesClassicLine (line_id integer primary key, Title varchar,ClassLine varchar)");
        q.exec("insert into MoviesClassicLine values (0,'黑客帝国1','选择是弱者在面对强者时产生的幻觉')");
        q.exec("insert into MoviesClassicLine values (1,'黑客帝国1','选择是有权利与没有权利者之间的不平衡')");
        q.exec("insert into MoviesClassicLine values (2,'人工智能','对爱的执着,可以超越一切')");
        q.exec("insert into MoviesClassicLine values (3,'模仿游戏','有时候，正是那些人们认为的无用之人成就了无人所成之事')");

        q.exec("create table Photos (id integer primary key, PhotoName varchar, collect varchar,year varchar,Remark varchar)");
        q.exec("insert into Photos values (0, '威尼斯小镇','C:\\Users\\86131\\Desktop\\resource', '2019', '小镇很美')");
        q.exec("insert into Photos values (1, '扬帆', 'D:\\MYSELF\\壁纸', '2020','适合当壁纸')");
        q.exec("insert into Photos values (2, '地球', D:\\MYSELF\\壁纸','2021', '很深邃')");
        q.exec("insert into Photos values (3, 'QT', 'https://image.baidu.com/search/detail?ct=503316480&z=0&ipn=d&word=qt&step_word=&hs=0&pn=0&spn=0&di=126500&pi=0&rn=1&tn=baiduimagedetail&is=0%2C0&istype=0&ie=utf-8&oe=utf-8&in=&cl=2&lm=-1&st=undefined&cs=1611866987%2C1297858964&os=4078432160%2C636762087&simid=0%2C0&adpicid=0&lpn=0&ln=1924&fr=&fmq=1626697931716_R&fm=&ic=undefined&s=undefined&hd=undefined&latest=undefined&copyright=undefined&se=&sme=&tab=0&width=undefined&height=undefined&face=undefined&ist=&jit=&cg=&bdtype=0&oriquery=&objurl=https%3A%2F%2Fgimg2.baidu.com%2Fimage_search%2Fsrc%3Dhttp%3A%2F%2Fwww.cxybcw.com%2Fwp-content%2Fuploads%2F2020%2F02%2Fbeepress3-1580896701.gif%26refer%3Dhttp%3A%2F%2Fwww.cxybcw.com%26app%3D2002%26size%3Df9999%2C10000%26q%3Da80%26n%3D0%26g%3D0n%26fmt%3Djpeg%3Fsec%3D1629290012%26t%3D32374b8b109ec83e743ccf6965060713&fromurl=ippr_z2C%24qAzdH3FAzdH3Fooo_z%26e3Bvxykvo_z%26e3Bv54AzdH3Fn9cmm_z%26e3Bip4s&gsm=1&rpstart=0&rpnum=0&islist=&querylist=&nojc=undefined', '2021','QT图标')");
        q.exec("insert into Photos values (4, '大工校徽', 'https://image.baidu.com/search/detail?ct=503316480&z=0&ipn=d&word=%E5%A4%A7%E8%BF%9E%E7%90%86%E5%B7%A5%E5%A4%A7%E5%AD%A6&step_word=&hs=0&pn=5&spn=0&di=6600&pi=0&rn=1&tn=baiduimagedetail&is=0%2C0&istype=0&ie=utf-8&oe=utf-8&in=&cl=2&lm=-1&st=undefined&cs=1368323377%2C905675977&os=796365728%2C1992435352&simid=3502695137%2C316732076&adpicid=0&lpn=0&ln=1845&fr=&fmq=1626698041092_R&fm=&ic=undefined&s=undefined&hd=undefined&latest=undefined&copyright=undefined&se=&sme=&tab=0&width=undefined&height=undefined&face=undefined&ist=&jit=&cg=&bdtype=0&oriquery=&objurl=https%3A%2F%2Fgimg2.baidu.com%2Fimage_search%2Fsrc%3Dhttp%3A%2F%2F5b0988e595225.cdn.sohucs.com%2Fimages%2F20171206%2F5a8cb5185b1f4a8b9bd75a42f86a6dc6.jpeg%26refer%3Dhttp%3A%2F%2F5b0988e595225.cdn.sohucs.com%26app%3D2002%26size%3Df9999%2C10000%26q%3Da80%26n%3D0%26g%3D0n%26fmt%3Djpeg%3Fsec%3D1629290122%26t%3Dae34abea8f2855b91bd7b64d72772e4c&fromurl=ippr_z2C%24qAzdH3FAzdH3Fooo_z%26e3Bf5i7_z%26e3Bv54AzdH3FwAzdH3Fdabm889al_mbd98m&gsm=5&rpstart=0&rpnum=0&islist=&querylist=&nojc=undefined','2020', '大工！')");

        q.exec("create table Text (id integer primary key, Title varchar,collect varchar,Content varchar, year number)");
        q.exec("insert into Text values (0, '项脊轩志', 'https://baike.baidu.com/item/%E9%A1%B9%E8%84%8A%E8%BD%A9%E5%BF%97/1225478?fr=aladdin','项脊轩，旧南阁子也。室仅方丈，可容一人居。百年老屋，尘泥渗漉，雨泽下注；每移案，顾视无可置者。又北向，不能得日，日过午已昏。余稍为修葺，使不上漏。前辟四窗，垣墙周庭，以当南日，日影反照，室始洞然。又杂植兰桂竹木于庭，旧时栏楯，亦遂增胜。借书满架，偃仰啸歌，冥然兀坐，万籁有声；而庭阶寂寂，小鸟时来啄食，人至不去。三五之夜，明月半墙，桂影斑驳，风移影动，珊珊可爱。','1524' )");

        connectionWidget->refresh();
    } else {
        QSqlError err = addConnection(dialog.driverName(), dialog.databaseName(), dialog.hostName(),
                           dialog.userName(), dialog.password(), dialog.port());
        if (err.type() != QSqlError::NoError)
            QMessageBox::warning(this, tr("无法打开"), tr("打开时发生了错误") + err.text());
    }
}

void Browser::showTable(const QString &t)
{
    QSqlTableModel *model = new CustomModel(table, connectionWidget->currentDatabase());
    model->setEditStrategy(QSqlTableModel::OnRowChange);
    model->setTable(connectionWidget->currentDatabase().driver()->escapeIdentifier(t, QSqlDriver::TableName));
    model->select();
    if (model->lastError().type() != QSqlError::NoError)
        emit statusMessage(model->lastError().text());

    table->setModel(model);
    table->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
    connect(table->selectionModel(), &QItemSelectionModel::currentRowChanged,
            this, &Browser::currentChanged);

    updateActions();
}

void Browser::showMetaData(const QString &t)
{
    QSqlRecord rec = connectionWidget->currentDatabase().record(t);
    QStandardItemModel *model = new QStandardItemModel(table);

    model->insertRows(0, rec.count());
    model->insertColumns(0, 7);

    model->setHeaderData(0, Qt::Horizontal, "Fieldname");
    model->setHeaderData(1, Qt::Horizontal, "Type");
    model->setHeaderData(2, Qt::Horizontal, "Length");
    model->setHeaderData(3, Qt::Horizontal, "Precision");
    model->setHeaderData(4, Qt::Horizontal, "Required");
    model->setHeaderData(5, Qt::Horizontal, "AutoValue");
    model->setHeaderData(6, Qt::Horizontal, "DefaultValue");

    for (int i = 0; i < rec.count(); ++i) {
        QSqlField fld = rec.field(i);
        model->setData(model->index(i, 0), fld.name());
        model->setData(model->index(i, 1), fld.typeID() == -1
                ? QString(QMetaType::typeName(fld.type()))
                : QString("%1 (%2)").arg(QMetaType::typeName(fld.type())).arg(fld.typeID()));
        model->setData(model->index(i, 2), fld.length());
        model->setData(model->index(i, 3), fld.precision());
        model->setData(model->index(i, 4), fld.requiredStatus() == -1 ? QVariant("?")
                : QVariant(bool(fld.requiredStatus())));
        model->setData(model->index(i, 5), fld.isAutoValue());
        model->setData(model->index(i, 6), fld.defaultValue());
    }

    table->setModel(model);
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);

    updateActions();
}

void Browser::insertRow()
{
    QSqlTableModel *model = qobject_cast<QSqlTableModel *>(table->model());
    if (!model)
        return;

    QModelIndex insertIndex = table->currentIndex();
    int row = insertIndex.row() == -1 ? 0 : insertIndex.row();
    model->insertRow(row);
    insertIndex = model->index(row, 0);
    table->setCurrentIndex(insertIndex);
    table->edit(insertIndex);
}

void Browser::deleteRow()
{
    QSqlTableModel *model = qobject_cast<QSqlTableModel *>(table->model());
    if (!model)
        return;

    QModelIndexList currentSelection = table->selectionModel()->selectedIndexes();
    for (int i = 0; i < currentSelection.count(); ++i) {
        if (currentSelection.at(i).column() != 0)
            continue;
        model->removeRow(currentSelection.at(i).row());
    }

    updateActions();
}

void Browser::updateActions()
{
    QSqlTableModel * tm = qobject_cast<QSqlTableModel *>(table->model());
    bool enableIns = tm;
    bool enableDel = enableIns && table->currentIndex().isValid();

    insertRowAction->setEnabled(enableIns);
    deleteRowAction->setEnabled(enableDel);

    fieldStrategyAction->setEnabled(tm);
    rowStrategyAction->setEnabled(tm);
    manualStrategyAction->setEnabled(tm);
    submitAction->setEnabled(tm);
    revertAction->setEnabled(tm);
    selectAction->setEnabled(tm);

    if (tm) {
        QSqlTableModel::EditStrategy es = tm->editStrategy();
        fieldStrategyAction->setChecked(es == QSqlTableModel::OnFieldChange);
        rowStrategyAction->setChecked(es == QSqlTableModel::OnRowChange);
        manualStrategyAction->setChecked(es == QSqlTableModel::OnManualSubmit);
    }
}

void Browser::about()
{
    QMessageBox::about(this, tr("About"), tr("我的收藏夹"));
}

void Browser::on_fieldStrategyAction_triggered()
{
    QSqlTableModel * tm = qobject_cast<QSqlTableModel *>(table->model());
    if (tm)
        tm->setEditStrategy(QSqlTableModel::OnFieldChange);
}

void Browser::on_rowStrategyAction_triggered()
{
    QSqlTableModel * tm = qobject_cast<QSqlTableModel *>(table->model());
    if (tm)
        tm->setEditStrategy(QSqlTableModel::OnRowChange);
}

void Browser::on_manualStrategyAction_triggered()
{
    QSqlTableModel * tm = qobject_cast<QSqlTableModel *>(table->model());
    if (tm)
        tm->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

void Browser::on_submitAction_triggered()
{
    QSqlTableModel * tm = qobject_cast<QSqlTableModel *>(table->model());
    if (tm)
        tm->submitAll();
}

void Browser::on_revertAction_triggered()
{
    QSqlTableModel * tm = qobject_cast<QSqlTableModel *>(table->model());
    if (tm)
        tm->revertAll();
}

void Browser::on_selectAction_triggered()
{
    QSqlTableModel * tm = qobject_cast<QSqlTableModel *>(table->model());
    if (tm)
        tm->select();
}

