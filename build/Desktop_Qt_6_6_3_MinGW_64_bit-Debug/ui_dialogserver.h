/********************************************************************************
** Form generated from reading UI file 'dialogserver.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSERVER_H
#define UI_DIALOGSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogServer
{
public:
    QLabel *IP_label;
    QLabel *WaitingLabel;

    void setupUi(QDialog *DialogServer)
    {
        if (DialogServer->objectName().isEmpty())
            DialogServer->setObjectName("DialogServer");
        DialogServer->resize(634, 125);
        IP_label = new QLabel(DialogServer);
        IP_label->setObjectName("IP_label");
        IP_label->setGeometry(QRect(60, 10, 521, 61));
        IP_label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(34, 34, 34);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
""));
        WaitingLabel = new QLabel(DialogServer);
        WaitingLabel->setObjectName("WaitingLabel");
        WaitingLabel->setGeometry(QRect(100, 74, 431, 51));
        WaitingLabel->setStyleSheet(QString::fromUtf8("\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(34, 34, 34);"));

        retranslateUi(DialogServer);

        QMetaObject::connectSlotsByName(DialogServer);
    } // setupUi

    void retranslateUi(QDialog *DialogServer)
    {
        DialogServer->setWindowTitle(QCoreApplication::translate("DialogServer", "Dialog", nullptr));
        IP_label->setText(QString());
        WaitingLabel->setText(QCoreApplication::translate("DialogServer", "Waiting for client...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogServer: public Ui_DialogServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSERVER_H
