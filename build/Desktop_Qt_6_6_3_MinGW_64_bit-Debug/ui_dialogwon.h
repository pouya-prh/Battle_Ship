/********************************************************************************
** Form generated from reading UI file 'dialogwon.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWON_H
#define UI_DIALOGWON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogWon
{
public:
    QLabel *label;
    QPushButton *backButton;

    void setupUi(QDialog *DialogWon)
    {
        if (DialogWon->objectName().isEmpty())
            DialogWon->setObjectName("DialogWon");
        DialogWon->resize(1022, 617);
        DialogWon->setStyleSheet(QString::fromUtf8("background-image: url(:/ShipBackGround.png);\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(DialogWon);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -30, 1041, 221));
        label->setStyleSheet(QString::fromUtf8("font: 80pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(0, 0, 200);"));
        backButton = new QPushButton(DialogWon);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(860, 550, 151, 51));
        backButton->setMouseTracking(true);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 0);\n"
"	\n"
"}\n"
"\n"
""));
        backButton->setInputMethodHints(Qt::ImhNone);

        retranslateUi(DialogWon);

        QMetaObject::connectSlotsByName(DialogWon);
    } // setupUi

    void retranslateUi(QDialog *DialogWon)
    {
        DialogWon->setWindowTitle(QCoreApplication::translate("DialogWon", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogWon", "You Win", nullptr));
        backButton->setText(QCoreApplication::translate("DialogWon", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogWon: public Ui_DialogWon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWON_H
