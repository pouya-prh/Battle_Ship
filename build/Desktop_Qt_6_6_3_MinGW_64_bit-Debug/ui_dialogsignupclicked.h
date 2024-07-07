/********************************************************************************
** Form generated from reading UI file 'dialogsignupclicked.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSIGNUPCLICKED_H
#define UI_DIALOGSIGNUPCLICKED_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogSignUpClicked
{
public:
    QLineEdit *namelineEdit;
    QLineEdit *lastNameLineEdit;
    QLineEdit *emailLineEdit;
    QPushButton *OkButton;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *numberLineEdit;

    void setupUi(QDialog *DialogSignUpClicked)
    {
        if (DialogSignUpClicked->objectName().isEmpty())
            DialogSignUpClicked->setObjectName("DialogSignUpClicked");
        DialogSignUpClicked->resize(629, 365);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recommended Source Files/Recommended Source Files/Images/mipmap-hdpi-v4/ic_launcher_round.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogSignUpClicked->setWindowIcon(icon);
        DialogSignUpClicked->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/textures/LoadingScreenBackground.png);"));
        namelineEdit = new QLineEdit(DialogSignUpClicked);
        namelineEdit->setObjectName("namelineEdit");
        namelineEdit->setGeometry(QRect(60, 50, 261, 61));
        namelineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        lastNameLineEdit = new QLineEdit(DialogSignUpClicked);
        lastNameLineEdit->setObjectName("lastNameLineEdit");
        lastNameLineEdit->setGeometry(QRect(60, 120, 261, 61));
        lastNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        emailLineEdit = new QLineEdit(DialogSignUpClicked);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(60, 190, 261, 61));
        emailLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        OkButton = new QPushButton(DialogSignUpClicked);
        OkButton->setObjectName("OkButton");
        OkButton->setGeometry(QRect(60, 260, 551, 51));
        OkButton->setMouseTracking(true);
        OkButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        OkButton->setInputMethodHints(Qt::ImhNone);
        usernameLineEdit = new QLineEdit(DialogSignUpClicked);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(350, 50, 261, 61));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        passwordLineEdit = new QLineEdit(DialogSignUpClicked);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(350, 121, 261, 61));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        numberLineEdit = new QLineEdit(DialogSignUpClicked);
        numberLineEdit->setObjectName("numberLineEdit");
        numberLineEdit->setGeometry(QRect(350, 190, 261, 61));
        numberLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        retranslateUi(DialogSignUpClicked);

        QMetaObject::connectSlotsByName(DialogSignUpClicked);
    } // setupUi

    void retranslateUi(QDialog *DialogSignUpClicked)
    {
        DialogSignUpClicked->setWindowTitle(QCoreApplication::translate("DialogSignUpClicked", "Sign Up", nullptr));
        namelineEdit->setText(QString());
        namelineEdit->setPlaceholderText(QCoreApplication::translate("DialogSignUpClicked", "name", nullptr));
        lastNameLineEdit->setText(QString());
        lastNameLineEdit->setPlaceholderText(QCoreApplication::translate("DialogSignUpClicked", "last name", nullptr));
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("DialogSignUpClicked", "email", nullptr));
        OkButton->setText(QCoreApplication::translate("DialogSignUpClicked", "Sign Up", nullptr));
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("DialogSignUpClicked", "username", nullptr));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("DialogSignUpClicked", "password", nullptr));
        numberLineEdit->setText(QString());
        numberLineEdit->setPlaceholderText(QCoreApplication::translate("DialogSignUpClicked", "number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSignUpClicked: public Ui_DialogSignUpClicked {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSIGNUPCLICKED_H
