/********************************************************************************
** Form generated from reading UI file 'dialogclient.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCLIENT_H
#define UI_DIALOGCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogClient
{
public:
    QPushButton *ConnectButton;
    QLineEdit *IP_lineEdit;

    void setupUi(QDialog *DialogClient)
    {
        if (DialogClient->objectName().isEmpty())
            DialogClient->setObjectName("DialogClient");
        DialogClient->resize(655, 111);
        ConnectButton = new QPushButton(DialogClient);
        ConnectButton->setObjectName("ConnectButton");
        ConnectButton->setGeometry(QRect(340, 30, 261, 51));
        ConnectButton->setMouseTracking(true);
        ConnectButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"QPushButton:hover {\n"
" \n"
"	color: rgb(0, 85, 0);\n"
"	background-color: rgb(0, 85, 0);\n"
"}\n"
"\n"
""));
        ConnectButton->setInputMethodHints(Qt::ImhNone);
        IP_lineEdit = new QLineEdit(DialogClient);
        IP_lineEdit->setObjectName("IP_lineEdit");
        IP_lineEdit->setGeometry(QRect(60, 30, 251, 51));
        IP_lineEdit->setFocusPolicy(Qt::StrongFocus);
        IP_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        retranslateUi(DialogClient);

        QMetaObject::connectSlotsByName(DialogClient);
    } // setupUi

    void retranslateUi(QDialog *DialogClient)
    {
        DialogClient->setWindowTitle(QCoreApplication::translate("DialogClient", "Dialog", nullptr));
        ConnectButton->setText(QCoreApplication::translate("DialogClient", "Connect", nullptr));
        IP_lineEdit->setText(QString());
        IP_lineEdit->setPlaceholderText(QCoreApplication::translate("DialogClient", "IP Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogClient: public Ui_DialogClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCLIENT_H
