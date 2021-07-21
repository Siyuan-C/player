#include "menu.h"
#include "sql.h"

#include <QtCore>
#include <QtWidgets>
#include <QtSql>
#include <QApplication>



void addConnectionsFromCommandline(const QStringList &args, Browser *browser)
{
    for (int i = 1; i < args.count(); ++i) {
        QUrl url(args.at(i), QUrl::TolerantMode);
        if (!url.isValid()) {
            qWarning("无效 URL: %s", qPrintable(args.at(i)));
            continue;
        }
        QSqlError err = browser->addConnection(url.scheme(), url.path().mid(1), url.host(),
                                               url.userName(), url.password(), url.port(-1));
        if (err.type() != QSqlError::NoError)
            qDebug() << "无法链接:" << err;
    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //QMenu *helpMenu = w.menu()->addMenu(QObject::tr("&Help"));

    QMainWindow mainWin;
    mainWin.setWindowTitle(QObject::tr("我的收藏夹"));

    Browser browser(&mainWin);
    mainWin.setCentralWidget(&browser);

    QMenu *fileMenu = mainWin.menuBar()->addMenu(QObject::tr("开始多媒体之旅   "));
    fileMenu->addAction(QObject::tr("新增链接"),
            [&]() { browser.addConnection(); });
    fileMenu->addSeparator();
    fileMenu->addAction(QObject::tr("开启多媒体"), []() {
       menu *w;
       w = new menu();
       w->show();
      });


    QMenu *helpMenu = mainWin.menuBar()->addMenu(QObject::tr(" 帮助"));
    helpMenu->addAction(QObject::tr("关于"), [&]() { browser.about(); });


    QObject::connect(&browser, &Browser::statusMessage, [&mainWin](const QString &text) {
        mainWin.statusBar()->showMessage(text);
    });

    addConnectionsFromCommandline(app.arguments(), &browser);
    mainWin.show();
    if (QSqlDatabase::connectionNames().isEmpty())
        QMetaObject::invokeMethod(&browser, "addConnection", Qt::QueuedConnection);


      mainWin.setAutoFillBackground(true);
       QPalette palette;
       QPixmap pixmap(":/icon/background2.png");
       palette.setBrush(QPalette::Window, QBrush(pixmap));
        mainWin.setPalette(palette);



    return app.exec();
}
