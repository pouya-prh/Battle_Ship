/********************************************************************************
** Form generated from reading UI file 'dialoglost.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOST_H
#define UI_DIALOGLOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogLost
{
public:
    QLabel *label;
    QPushButton *backButton_2;

    void setupUi(QDialog *DialogLost)
    {
        if (DialogLost->objectName().isEmpty())
            DialogLost->setObjectName("DialogLost");
        DialogLost->resize(982, 601);
        DialogLost->setStyleSheet(QString::fromUtf8("background-image: url(:/LostShipBackG.png);\n"
"background-color: rgb(29, 29, 29);"));
        label = new QLabel(DialogLost);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 661, 221));
        label->setStyleSheet(QString::fromUtf8("font: 80pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(255, 0, 0);"));
        backButton_2 = new QPushButton(DialogLost);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(820, 530, 151, 51));
        backButton_2->setMouseTracking(true);
        backButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 0);\n"
"	\n"
"}\n"
"\n"
""));
        backButton_2->setInputMethodHints(Qt::ImhNone);

        retranslateUi(DialogLost);

        QMetaObject::connectSlotsByName(DialogLost);
    } // setupUi

    void retranslateUi(QDialog *DialogLost)
    {
        DialogLost->setWindowTitle(QCoreApplication::translate("DialogLost", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogLost", "You Lose", nullptr));
        backButton_2->setText(QCoreApplication::translate("DialogLost", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLost: public Ui_DialogLost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOST_H
