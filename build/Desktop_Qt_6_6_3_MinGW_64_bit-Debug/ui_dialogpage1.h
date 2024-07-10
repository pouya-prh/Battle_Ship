/********************************************************************************
** Form generated from reading UI file 'dialogpage1.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPAGE1_H
#define UI_DIALOGPAGE1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPage1
{
public:
    QProgressBar *progressBar;
    QPushButton *BotPushbutton;
    QPushButton *WifiPushbutton;
    QPushButton *FriendPushbutton;
    QWidget *widget;
    QLabel *username_lable;
    QLabel *level_label;
    QLabel *point_label;
    QLabel *drop_label;
    QLabel *wellcome_lable;

    void setupUi(QDialog *DialogPage1)
    {
        if (DialogPage1->objectName().isEmpty())
            DialogPage1->setObjectName("DialogPage1");
        DialogPage1->resize(1025, 596);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recommended Source Files/Recommended Source Files/Images/mipmap-hdpi-v4/ic_launcher_round.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogPage1->setWindowIcon(icon);
        DialogPage1->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/textures/LoadingScreenBackground.png);"));
        progressBar = new QProgressBar(DialogPage1);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(260, 520, 521, 31));
        progressBar->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        BotPushbutton = new QPushButton(DialogPage1);
        BotPushbutton->setObjectName("BotPushbutton");
        BotPushbutton->setGeometry(QRect(110, 172, 181, 181));
        BotPushbutton->setStyleSheet(QString::fromUtf8("image: url(:/WithAI.png);"));
        WifiPushbutton = new QPushButton(DialogPage1);
        WifiPushbutton->setObjectName("WifiPushbutton");
        WifiPushbutton->setGeometry(QRect(410, 176, 181, 181));
        WifiPushbutton->setStyleSheet(QString::fromUtf8("image: url(:/online.png);"));
        FriendPushbutton = new QPushButton(DialogPage1);
        FriendPushbutton->setObjectName("FriendPushbutton");
        FriendPushbutton->setGeometry(QRect(743, 171, 181, 181));
        FriendPushbutton->setStyleSheet(QString::fromUtf8("image: url(:/on_DEvice.png);"));
        widget = new QWidget(DialogPage1);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -10, 301, 91));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        username_lable = new QLabel(widget);
        username_lable->setObjectName("username_lable");
        username_lable->setGeometry(QRect(4, 11, 291, 31));
        username_lable->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 20pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
""));
        username_lable->setAlignment(Qt::AlignCenter);
        level_label = new QLabel(widget);
        level_label->setObjectName("level_label");
        level_label->setGeometry(QRect(2, 56, 91, 31));
        level_label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 15pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);"));
        level_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        point_label = new QLabel(widget);
        point_label->setObjectName("point_label");
        point_label->setGeometry(QRect(107, 56, 91, 31));
        point_label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 15pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);"));
        point_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        drop_label = new QLabel(widget);
        drop_label->setObjectName("drop_label");
        drop_label->setGeometry(QRect(207, 55, 91, 31));
        drop_label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 15pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);"));
        drop_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        wellcome_lable = new QLabel(DialogPage1);
        wellcome_lable->setObjectName("wellcome_lable");
        wellcome_lable->setGeometry(QRect(260, 521, 521, 31));
        wellcome_lable->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);"));
        wellcome_lable->setAlignment(Qt::AlignCenter);
        BotPushbutton->raise();
        progressBar->raise();
        WifiPushbutton->raise();
        FriendPushbutton->raise();
        widget->raise();
        wellcome_lable->raise();

        retranslateUi(DialogPage1);

        QMetaObject::connectSlotsByName(DialogPage1);
    } // setupUi

    void retranslateUi(QDialog *DialogPage1)
    {
        DialogPage1->setWindowTitle(QCoreApplication::translate("DialogPage1", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        progressBar->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        progressBar->setFormat(QCoreApplication::translate("DialogPage1", "%p%", nullptr));
        BotPushbutton->setText(QString());
        WifiPushbutton->setText(QString());
        FriendPushbutton->setText(QString());
        username_lable->setText(QString());
        level_label->setText(QCoreApplication::translate("DialogPage1", "Level:", nullptr));
        point_label->setText(QCoreApplication::translate("DialogPage1", "point:", nullptr));
        drop_label->setText(QCoreApplication::translate("DialogPage1", "drop:", nullptr));
        wellcome_lable->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogPage1: public Ui_DialogPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPAGE1_H
