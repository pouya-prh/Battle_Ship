/********************************************************************************
** Form generated from reading UI file 'dialogserverplay.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSERVERPLAY_H
#define UI_DIALOGSERVERPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <gameboard.h>
#include "draggablebutton.h"

QT_BEGIN_NAMESPACE

class Ui_DialogServerPlay
{
public:
    QPushButton *planeLabel;
    QLabel *turnLabel;
    GameBoard *Client_TableWidget;
    GameBoard *Server_tableWidget;
    QPushButton *atomicBombButton;
    QPushButton *trackerButton;
    QPushButton *linearAttackbutton;
    QLabel *linearAttackCounter;
    QLabel *atomicBombCounter;
    DraggableButton *atomicZone;
    QLabel *trackerCounter;
    DraggableButton *trackerButton2;

    void setupUi(QDialog *DialogServerPlay)
    {
        if (DialogServerPlay->objectName().isEmpty())
            DialogServerPlay->setObjectName("DialogServerPlay");
        DialogServerPlay->resize(1050, 600);
        DialogServerPlay->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        planeLabel = new QPushButton(DialogServerPlay);
        planeLabel->setObjectName("planeLabel");
        planeLabel->setGeometry(QRect(10, 10, 101, 61));
        planeLabel->setStyleSheet(QString::fromUtf8("background-image: url(:/squareAttackFliped.png);"));
        turnLabel = new QLabel(DialogServerPlay);
        turnLabel->setObjectName("turnLabel");
        turnLabel->setGeometry(QRect(510, 250, 41, 101));
        turnLabel->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        Client_TableWidget = new GameBoard(DialogServerPlay);
        if (Client_TableWidget->columnCount() < 10)
            Client_TableWidget->setColumnCount(10);
        if (Client_TableWidget->rowCount() < 10)
            Client_TableWidget->setRowCount(10);
        QFont font;
        font.setWeight(QFont::Thin);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        Client_TableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Client_TableWidget->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Client_TableWidget->setItem(0, 0, __qtablewidgetitem10);
        Client_TableWidget->setObjectName("Client_TableWidget");
        Client_TableWidget->setEnabled(true);
        Client_TableWidget->setGeometry(QRect(590, 68, 431, 431));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Client_TableWidget->sizePolicy().hasHeightForWidth());
        Client_TableWidget->setSizePolicy(sizePolicy);
        Client_TableWidget->setMinimumSize(QSize(381, 411));
        Client_TableWidget->setAcceptDrops(true);
        Client_TableWidget->setLayoutDirection(Qt::RightToLeft);
        Client_TableWidget->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        Client_TableWidget->setFrameShape(QFrame::StyledPanel);
        Client_TableWidget->setLineWidth(0);
        Client_TableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Client_TableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Client_TableWidget->setAutoScroll(false);
        Client_TableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Client_TableWidget->setDragEnabled(true);
        Client_TableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        Client_TableWidget->setDefaultDropAction(Qt::MoveAction);
        Client_TableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        Client_TableWidget->setIconSize(QSize(40, 40));
        Client_TableWidget->setGridStyle(Qt::DashDotLine);
        Client_TableWidget->setCornerButtonEnabled(false);
        Client_TableWidget->setRowCount(10);
        Client_TableWidget->setColumnCount(10);
        Client_TableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        Client_TableWidget->horizontalHeader()->setMinimumSectionSize(40);
        Client_TableWidget->horizontalHeader()->setDefaultSectionSize(40);
        Client_TableWidget->verticalHeader()->setMinimumSectionSize(40);
        Client_TableWidget->verticalHeader()->setDefaultSectionSize(40);
        Server_tableWidget = new GameBoard(DialogServerPlay);
        if (Server_tableWidget->columnCount() < 10)
            Server_tableWidget->setColumnCount(10);
        if (Server_tableWidget->rowCount() < 10)
            Server_tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        Server_tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        Server_tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        Server_tableWidget->setItem(0, 0, __qtablewidgetitem21);
        Server_tableWidget->setObjectName("Server_tableWidget");
        Server_tableWidget->setEnabled(true);
        Server_tableWidget->setGeometry(QRect(50, 68, 431, 431));
        sizePolicy.setHeightForWidth(Server_tableWidget->sizePolicy().hasHeightForWidth());
        Server_tableWidget->setSizePolicy(sizePolicy);
        Server_tableWidget->setMinimumSize(QSize(381, 411));
        Server_tableWidget->setAcceptDrops(true);
        Server_tableWidget->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        Server_tableWidget->setFrameShape(QFrame::StyledPanel);
        Server_tableWidget->setLineWidth(0);
        Server_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Server_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Server_tableWidget->setAutoScroll(false);
        Server_tableWidget->setDragEnabled(true);
        Server_tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        Server_tableWidget->setDefaultDropAction(Qt::MoveAction);
        Server_tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        Server_tableWidget->setIconSize(QSize(40, 40));
        Server_tableWidget->setGridStyle(Qt::DashDotLine);
        Server_tableWidget->setCornerButtonEnabled(false);
        Server_tableWidget->setRowCount(10);
        Server_tableWidget->setColumnCount(10);
        Server_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        Server_tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        Server_tableWidget->horizontalHeader()->setDefaultSectionSize(40);
        Server_tableWidget->verticalHeader()->setMinimumSectionSize(40);
        Server_tableWidget->verticalHeader()->setDefaultSectionSize(40);
        atomicBombButton = new QPushButton(DialogServerPlay);
        atomicBombButton->setObjectName("atomicBombButton");
        atomicBombButton->setGeometry(QRect(190, 510, 81, 81));
        atomicBombButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));
        trackerButton = new QPushButton(DialogServerPlay);
        trackerButton->setObjectName("trackerButton");
        trackerButton->setGeometry(QRect(50, 510, 81, 81));
        trackerButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        linearAttackbutton = new QPushButton(DialogServerPlay);
        linearAttackbutton->setObjectName("linearAttackbutton");
        linearAttackbutton->setGeometry(QRect(320, 510, 81, 81));
        linearAttackbutton->setStyleSheet(QString::fromUtf8("image: url(:/squareAttackFliped.png);"));
        linearAttackCounter = new QLabel(DialogServerPlay);
        linearAttackCounter->setObjectName("linearAttackCounter");
        linearAttackCounter->setGeometry(QRect(380, 570, 21, 21));
        linearAttackCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        linearAttackCounter->setAlignment(Qt::AlignCenter);
        atomicBombCounter = new QLabel(DialogServerPlay);
        atomicBombCounter->setObjectName("atomicBombCounter");
        atomicBombCounter->setGeometry(QRect(250, 568, 21, 21));
        atomicBombCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        atomicBombCounter->setAlignment(Qt::AlignCenter);
        atomicZone = new DraggableButton(DialogServerPlay);
        atomicZone->setObjectName("atomicZone");
        atomicZone->setGeometry(QRect(150, 438, 160, 160));
        atomicZone->setStyleSheet(QString::fromUtf8("image: url(:/redBox.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        trackerCounter = new QLabel(DialogServerPlay);
        trackerCounter->setObjectName("trackerCounter");
        trackerCounter->setGeometry(QRect(110, 570, 21, 21));
        trackerCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        trackerCounter->setAlignment(Qt::AlignCenter);
        trackerButton2 = new DraggableButton(DialogServerPlay);
        trackerButton2->setObjectName("trackerButton2");
        trackerButton2->setGeometry(QRect(50, 510, 80, 80));
        trackerButton2->setStyleSheet(QString::fromUtf8("image: url(:/grinTracker.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));

        retranslateUi(DialogServerPlay);

        QMetaObject::connectSlotsByName(DialogServerPlay);
    } // setupUi

    void retranslateUi(QDialog *DialogServerPlay)
    {
        DialogServerPlay->setWindowTitle(QCoreApplication::translate("DialogServerPlay", "Dialog", nullptr));
        planeLabel->setText(QString());
        turnLabel->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = Client_TableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogServerPlay", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Client_TableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogServerPlay", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Client_TableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogServerPlay", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Client_TableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogServerPlay", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Client_TableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogServerPlay", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Client_TableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogServerPlay", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Client_TableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogServerPlay", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Client_TableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogServerPlay", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Client_TableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogServerPlay", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Client_TableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogServerPlay", "J", nullptr));

        const bool __sortingEnabled = Client_TableWidget->isSortingEnabled();
        Client_TableWidget->setSortingEnabled(false);
        Client_TableWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        Client_TableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        QTableWidgetItem *___qtablewidgetitem10 = Server_tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DialogServerPlay", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = Server_tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DialogServerPlay", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = Server_tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DialogServerPlay", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = Server_tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DialogServerPlay", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = Server_tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DialogServerPlay", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = Server_tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DialogServerPlay", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = Server_tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DialogServerPlay", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = Server_tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DialogServerPlay", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = Server_tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DialogServerPlay", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = Server_tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DialogServerPlay", "J", nullptr));

        const bool __sortingEnabled1 = Server_tableWidget->isSortingEnabled();
        Server_tableWidget->setSortingEnabled(false);
        Server_tableWidget->setSortingEnabled(__sortingEnabled1);

#if QT_CONFIG(accessibility)
        Server_tableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        atomicBombButton->setText(QString());
        trackerButton->setText(QString());
        linearAttackbutton->setText(QString());
        linearAttackCounter->setText(QCoreApplication::translate("DialogServerPlay", "0", nullptr));
        atomicBombCounter->setText(QCoreApplication::translate("DialogServerPlay", "0", nullptr));
        atomicZone->setText(QString());
        trackerCounter->setText(QCoreApplication::translate("DialogServerPlay", "0", nullptr));
        trackerButton2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogServerPlay: public Ui_DialogServerPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSERVERPLAY_H
