/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *widget;
    QPushButton *videoButton;
    QLabel *label;
    QWidget *widget_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *widget_3;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QWidget *widget_4;
    QLabel *label_4;
    QPushButton *pushButton_3;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(800, 600);
        menu->setAutoFillBackground(true);
        menu->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(menu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 130, 200, 300));
        videoButton = new QPushButton(widget);
        videoButton->setObjectName(QString::fromUtf8("videoButton"));
        videoButton->setGeometry(QRect(-20, -60, 281, 241));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/video_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        videoButton->setIcon(icon);
        videoButton->setIconSize(QSize(200, 200));
        videoButton->setFlat(true);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 170, 121, 21));
        label->setTextFormat(Qt::AutoText);
        widget_2 = new QWidget(menu);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(300, 110, 200, 271));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 180, 101, 41));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(-20, -50, 271, 261));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/imageViewer.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(200, 200));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        widget_3 = new QWidget(menu);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(550, 130, 200, 300));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 150, 91, 61));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(-50, -60, 291, 251));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/texteditor_78423.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(200, 200));
        pushButton_2->setFlat(true);
        widget_4 = new QWidget(menu);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(-40, 0, 911, 661));
        widget_4->setAutoFillBackground(false);
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/icon/background.png);"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(740, 531, 54, 31));
        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(720, 500, 80, 20));
        widget_4->raise();
        widget->raise();
        widget_2->raise();
        widget_3->raise();

        retranslateUi(menu);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "menu", nullptr));
        videoButton->setText(QString());
        label->setText(QCoreApplication::translate("menu", "\351\237\263/\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("menu", "\345\233\276\347\211\207\346\265\217\350\247\210\345\231\250", nullptr));
        pushButton->setText(QString());
        label_3->setText(QCoreApplication::translate("menu", "\345\257\214\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        pushButton_2->setText(QString());
        label_4->setText(QCoreApplication::translate("menu", "\351\231\210\345\227\243\345\205\203", nullptr));
        pushButton_3->setText(QCoreApplication::translate("menu", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
