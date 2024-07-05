/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SignUppushButton;
    QPushButton *LoginPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1128, 624);
        MainWindow->setMaximumSize(QSize(10000, 10000));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recommended Source Files/Recommended Source Files/Images/mipmap-hdpi-v4/ic_launcher_round.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/textures/LoadingScreenBackground.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignUppushButton = new QPushButton(centralwidget);
        SignUppushButton->setObjectName("SignUppushButton");
        SignUppushButton->setGeometry(QRect(240, 510, 271, 51));
        SignUppushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(85, 0, 127);\n"
"	color: rgb(85, 0, 127);\n"
"\n"
"}\n"
"\n"
""));
        LoginPushButton = new QPushButton(centralwidget);
        LoginPushButton->setObjectName("LoginPushButton");
        LoginPushButton->setGeometry(QRect(510, 510, 281, 51));
        LoginPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(85, 0, 127);\n"
"	color: rgb(85, 0, 127);\n"
"\n"
"}\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1128, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sea Battle", nullptr));
        SignUppushButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        LoginPushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
