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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogPage1
{
public:
    QProgressBar *progressBar;
    QTextEdit *textEdit;
    QPushButton *BotPushbutton;
    QPushButton *WifiPushbutton;
    QPushButton *FriendPushbutton;

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
        textEdit = new QTextEdit(DialogPage1);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(260, 521, 521, 31));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(57, 29, 187);\n"
"font: 25pt \"BYRIL_Sea_Battle2\";"));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        BotPushbutton = new QPushButton(DialogPage1);
        BotPushbutton->setObjectName("BotPushbutton");
        BotPushbutton->setGeometry(QRect(110, 172, 181, 181));
        BotPushbutton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/AI_img.png);"));
        WifiPushbutton = new QPushButton(DialogPage1);
        WifiPushbutton->setObjectName("WifiPushbutton");
        WifiPushbutton->setGeometry(QRect(410, 176, 181, 181));
        WifiPushbutton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/online_img.png);"));
        FriendPushbutton = new QPushButton(DialogPage1);
        FriendPushbutton->setObjectName("FriendPushbutton");
        FriendPushbutton->setGeometry(QRect(743, 171, 181, 181));
        FriendPushbutton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/withFriend_img.png);"));

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
    } // retranslateUi

};

namespace Ui {
    class DialogPage1: public Ui_DialogPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPAGE1_H
