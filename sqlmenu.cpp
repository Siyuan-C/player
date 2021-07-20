#include "sqlmenu.h"
#include "menu.h"
#include "sql.h"

#include <QtCore>
#include <QtWidgets>
#include <QtSql>
#include <QApplication>


Ui::MainWindow *ui = nullptr;


void ui_init(Ui::MainWindow *ui_ptr)
{
    ui = ui_ptr;
}
