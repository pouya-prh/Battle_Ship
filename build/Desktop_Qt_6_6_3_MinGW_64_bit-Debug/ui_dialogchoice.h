/********************************************************************************
** Form generated from reading UI file 'dialogchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHOICE_H
#define UI_DIALOGCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialogchoice
{
public:
    QPushButton *serverButtons;
    QPushButton *ClientButton;

    void setupUi(QDialog *Dialogchoice)
    {
        if (Dialogchoice->objectName().isEmpty())
            Dialogchoice->setObjectName("Dialogchoice");
        Dialogchoice->resize(629, 380);
        serverButtons = new QPushButton(Dialogchoice);
        serverButtons->setObjectName("serverButtons");
        serverButtons->setGeometry(QRect(100, 60, 151, 61));
        ClientButton = new QPushButton(Dialogchoice);
        ClientButton->setObjectName("ClientButton");
        ClientButton->setGeometry(QRect(290, 60, 161, 61));

        retranslateUi(Dialogchoice);

        QMetaObject::connectSlotsByName(Dialogchoice);
    } // setupUi

    void retranslateUi(QDialog *Dialogchoice)
    {
        Dialogchoice->setWindowTitle(QCoreApplication::translate("Dialogchoice", "Dialog", nullptr));
        serverButtons->setText(QCoreApplication::translate("Dialogchoice", "server", nullptr));
        ClientButton->setText(QCoreApplication::translate("Dialogchoice", "client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogchoice: public Ui_Dialogchoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHOICE_H
