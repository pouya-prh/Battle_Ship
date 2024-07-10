/********************************************************************************
** Form generated from reading UI file 'dialogchoose.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHOOSE_H
#define UI_DIALOGCHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogChoose
{
public:
    QPushButton *ServerButton;
    QPushButton *ClientButton;

    void setupUi(QDialog *DialogChoose)
    {
        if (DialogChoose->objectName().isEmpty())
            DialogChoose->setObjectName("DialogChoose");
        DialogChoose->resize(324, 310);
        DialogChoose->setStyleSheet(QString::fromUtf8(""));
        ServerButton = new QPushButton(DialogChoose);
        ServerButton->setObjectName("ServerButton");
        ServerButton->setGeometry(QRect(29, 80, 261, 51));
        ServerButton->setMouseTracking(true);
        ServerButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ServerButton->setInputMethodHints(Qt::ImhNone);
        ClientButton = new QPushButton(DialogChoose);
        ClientButton->setObjectName("ClientButton");
        ClientButton->setGeometry(QRect(27, 202, 261, 51));
        ClientButton->setMouseTracking(true);
        ClientButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ClientButton->setInputMethodHints(Qt::ImhNone);

        retranslateUi(DialogChoose);

        QMetaObject::connectSlotsByName(DialogChoose);
    } // setupUi

    void retranslateUi(QDialog *DialogChoose)
    {
        DialogChoose->setWindowTitle(QCoreApplication::translate("DialogChoose", "Dialog", nullptr));
        ServerButton->setText(QCoreApplication::translate("DialogChoose", "Server", nullptr));
        ClientButton->setText(QCoreApplication::translate("DialogChoose", "Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogChoose: public Ui_DialogChoose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHOOSE_H
