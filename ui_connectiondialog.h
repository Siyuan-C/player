/********************************************************************************
** Form generated from reading UI file 'connectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIALOG_H
#define UI_CONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QSqlConnectionDialogUi
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *connGroupBox;
    QGridLayout *gridLayout;
    QComboBox *comboDriver;
    QLabel *textLabel4;
    QLabel *textLabel2;
    QLineEdit *editDatabase;
    QSpinBox *portSpinBox;
    QLabel *textLabel3;
    QLineEdit *editPassword;
    QLineEdit *editUsername;
    QLineEdit *editHostname;
    QLabel *textLabel5;
    QLabel *textLabel5_2;
    QLabel *textLabel4_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QCheckBox *dbCheckBox;
    QHBoxLayout *hboxLayout1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *QSqlConnectionDialogUi)
    {
        if (QSqlConnectionDialogUi->objectName().isEmpty())
            QSqlConnectionDialogUi->setObjectName(QString::fromUtf8("QSqlConnectionDialogUi"));
        QSqlConnectionDialogUi->resize(315, 302);
        vboxLayout = new QVBoxLayout(QSqlConnectionDialogUi);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        connGroupBox = new QGroupBox(QSqlConnectionDialogUi);
        connGroupBox->setObjectName(QString::fromUtf8("connGroupBox"));
        gridLayout = new QGridLayout(connGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(8, 8, 8, 8);
        comboDriver = new QComboBox(connGroupBox);
        comboDriver->setObjectName(QString::fromUtf8("comboDriver"));

        gridLayout->addWidget(comboDriver, 0, 1, 1, 1);

        textLabel4 = new QLabel(connGroupBox);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout->addWidget(textLabel4, 2, 0, 1, 1);

        textLabel2 = new QLabel(connGroupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

        editDatabase = new QLineEdit(connGroupBox);
        editDatabase->setObjectName(QString::fromUtf8("editDatabase"));

        gridLayout->addWidget(editDatabase, 1, 1, 1, 1);

        portSpinBox = new QSpinBox(connGroupBox);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        portSpinBox->setMinimum(-1);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(-1);

        gridLayout->addWidget(portSpinBox, 5, 1, 1, 1);

        textLabel3 = new QLabel(connGroupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 1, 0, 1, 1);

        editPassword = new QLineEdit(connGroupBox);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(editPassword, 3, 1, 1, 1);

        editUsername = new QLineEdit(connGroupBox);
        editUsername->setObjectName(QString::fromUtf8("editUsername"));

        gridLayout->addWidget(editUsername, 2, 1, 1, 1);

        editHostname = new QLineEdit(connGroupBox);
        editHostname->setObjectName(QString::fromUtf8("editHostname"));

        gridLayout->addWidget(editHostname, 4, 1, 1, 1);

        textLabel5 = new QLabel(connGroupBox);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout->addWidget(textLabel5, 4, 0, 1, 1);

        textLabel5_2 = new QLabel(connGroupBox);
        textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));

        gridLayout->addWidget(textLabel5_2, 5, 0, 1, 1);

        textLabel4_2 = new QLabel(connGroupBox);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));

        gridLayout->addWidget(textLabel4_2, 3, 0, 1, 1);


        vboxLayout->addWidget(connGroupBox);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        dbCheckBox = new QCheckBox(QSqlConnectionDialogUi);
        dbCheckBox->setObjectName(QString::fromUtf8("dbCheckBox"));

        hboxLayout->addWidget(dbCheckBox);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(QSqlConnectionDialogUi);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon);

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(QSqlConnectionDialogUi);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icon/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);

#if QT_CONFIG(shortcut)
        textLabel4->setBuddy(editUsername);
        textLabel2->setBuddy(comboDriver);
        textLabel3->setBuddy(editDatabase);
        textLabel5->setBuddy(editHostname);
        textLabel5_2->setBuddy(portSpinBox);
        textLabel4_2->setBuddy(editPassword);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(comboDriver, editDatabase);
        QWidget::setTabOrder(editDatabase, editUsername);
        QWidget::setTabOrder(editUsername, editPassword);
        QWidget::setTabOrder(editPassword, editHostname);
        QWidget::setTabOrder(editHostname, portSpinBox);
        QWidget::setTabOrder(portSpinBox, dbCheckBox);
        QWidget::setTabOrder(dbCheckBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(QSqlConnectionDialogUi);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(QSqlConnectionDialogUi);
    } // setupUi

    void retranslateUi(QDialog *QSqlConnectionDialogUi)
    {
        QSqlConnectionDialogUi->setWindowTitle(QCoreApplication::translate("QSqlConnectionDialogUi", "Connect...", nullptr));
        connGroupBox->setTitle(QCoreApplication::translate("QSqlConnectionDialogUi", "\351\223\276\346\216\245\350\256\276\347\275\256", nullptr));
        textLabel4->setText(QCoreApplication::translate("QSqlConnectionDialogUi", "\347\224\250\346\210\267\345\220\215", nullptr));
        textLabel2->setText(QCoreApplication::translate("QSqlConnectionDialogUi", "\351\251\261\345\212\250", nullptr));
        portSpinBox->setSpecialValueText(QCoreApplication::translate("QSqlConnectionDialogUi", "Default", nullptr));
        textLabel3->setText(QCoreApplication::translate("QSqlConnectionDialogUi", "\346\225\260\346\215\256\345\272\223\345\220\215\347\247\260", nullptr));
        textLabel5->setText(QCoreApplication::translate("QSqlConnectionDialogUi", "\344\270\273\346\234\272\345\220\215", nullptr));
        textLabel5_2->setText(QCoreApplication::translate("QSqlConnectionDialogUi", "\347\253\257\345\217\243", nullptr));
        textLabel4_2->setText(QCoreApplication::translate("QSqlConnectionDialogUi", "\345\257\206\347\240\201", nullptr));
        dbCheckBox->setText(QCoreApplication::translate("QSqlConnectionDialogUi", "\344\275\277\347\224\250\351\242\204\345\256\232\344\271\211\346\225\260\346\215\256\345\272\223", nullptr));
        okButton->setText(QString());
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QSqlConnectionDialogUi: public Ui_QSqlConnectionDialogUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIALOG_H
