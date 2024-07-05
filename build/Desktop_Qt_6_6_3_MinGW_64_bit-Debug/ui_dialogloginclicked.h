/********************************************************************************
** Form generated from reading UI file 'dialogloginclicked.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGINCLICKED_H
#define UI_DIALOGLOGINCLICKED_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogLoginClicked
{
public:
    QPushButton *OkButton;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;

    void setupUi(QDialog *DialogLoginClicked)
    {
        if (DialogLoginClicked->objectName().isEmpty())
            DialogLoginClicked->setObjectName("DialogLoginClicked");
        DialogLoginClicked->resize(373, 261);
        DialogLoginClicked->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recommended Source Files/Recommended Source Files/Images/mipmap-hdpi-v4/ic_launcher_round.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogLoginClicked->setWindowIcon(icon);
        DialogLoginClicked->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/textures/LoadingScreenBackground.png);"));
        OkButton = new QPushButton(DialogLoginClicked);
        OkButton->setObjectName("OkButton");
        OkButton->setGeometry(QRect(60, 180, 261, 51));
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
        usernameLineEdit = new QLineEdit(DialogLoginClicked);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(60, 40, 261, 61));
        usernameLineEdit->setFocusPolicy(Qt::StrongFocus);
        usernameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        passwordLineEdit = new QLineEdit(DialogLoginClicked);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(60, 110, 261, 61));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"\n"
""));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(DialogLoginClicked);

        QMetaObject::connectSlotsByName(DialogLoginClicked);
    } // setupUi

    void retranslateUi(QDialog *DialogLoginClicked)
    {
        DialogLoginClicked->setWindowTitle(QCoreApplication::translate("DialogLoginClicked", "Login", nullptr));
#if QT_CONFIG(tooltip)
        DialogLoginClicked->setToolTip(QCoreApplication::translate("DialogLoginClicked", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        DialogLoginClicked->setWhatsThis(QCoreApplication::translate("DialogLoginClicked", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        OkButton->setText(QCoreApplication::translate("DialogLoginClicked", "Login", nullptr));
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("DialogLoginClicked", "username", nullptr));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("DialogLoginClicked", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLoginClicked: public Ui_DialogLoginClicked {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGINCLICKED_H
