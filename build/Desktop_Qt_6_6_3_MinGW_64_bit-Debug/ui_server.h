/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_server
{
public:
    QLineEdit *ipLineEdit;
    QLabel *label;
    QPushButton *ConnectButton;
    QPushButton *sendButton;
    QLineEdit *messageLineEdit;
    QTextEdit *chatTextEdit;

    void setupUi(QDialog *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName("server");
        server->resize(501, 506);
        server->setStyleSheet(QString::fromUtf8(""));
        ipLineEdit = new QLineEdit(server);
        ipLineEdit->setObjectName("ipLineEdit");
        ipLineEdit->setGeometry(QRect(150, 50, 181, 51));
        label = new QLabel(server);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 61, 41));
        ConnectButton = new QPushButton(server);
        ConnectButton->setObjectName("ConnectButton");
        ConnectButton->setGeometry(QRect(170, 120, 151, 41));
        sendButton = new QPushButton(server);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(180, 440, 121, 41));
        messageLineEdit = new QLineEdit(server);
        messageLineEdit->setObjectName("messageLineEdit");
        messageLineEdit->setGeometry(QRect(80, 387, 321, 41));
        chatTextEdit = new QTextEdit(server);
        chatTextEdit->setObjectName("chatTextEdit");
        chatTextEdit->setGeometry(QRect(80, 174, 311, 201));

        retranslateUi(server);

        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QDialog *server)
    {
        server->setWindowTitle(QCoreApplication::translate("server", "Dialog", nullptr));
        ipLineEdit->setText(QString());
        label->setText(QCoreApplication::translate("server", "friend IP : ", nullptr));
        ConnectButton->setText(QCoreApplication::translate("server", "connect", nullptr));
        sendButton->setText(QCoreApplication::translate("server", "sendButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
