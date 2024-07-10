/********************************************************************************
** Form generated from reading UI file 'dialogclientplay.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCLIENTPLAY_H
#define UI_DIALOGCLIENTPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <gameboard.h>
#include "draggablebutton.h"

QT_BEGIN_NAMESPACE

class Ui_DialogClientPlay
{
public:
    GameBoard *Server_TableWidget;
    QPushButton *trackerButton;
    DraggableButton *atomicZone;
    GameBoard *Client_tableWidget;
    DraggableButton *trackerButton2;
    QLabel *trackerCounter;
    QPushButton *atomicBombButton;
    QLabel *atomicBombCounter;
    DraggableButton *atomicZone_2;
    QPushButton *linearAttackbutton;
    QLabel *linearAttackCounter;
    QPushButton *planeLabel;

    void setupUi(QDialog *DialogClientPlay)
    {
        if (DialogClientPlay->objectName().isEmpty())
            DialogClientPlay->setObjectName("DialogClientPlay");
        DialogClientPlay->resize(1050, 600);
        DialogClientPlay->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        Server_TableWidget = new GameBoard(DialogClientPlay);
        if (Server_TableWidget->columnCount() < 10)
            Server_TableWidget->setColumnCount(10);
        if (Server_TableWidget->rowCount() < 10)
            Server_TableWidget->setRowCount(10);
        QFont font;
        font.setWeight(QFont::Thin);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        Server_TableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Server_TableWidget->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Server_TableWidget->setItem(0, 0, __qtablewidgetitem10);
        Server_TableWidget->setObjectName("Server_TableWidget");
        Server_TableWidget->setEnabled(true);
        Server_TableWidget->setGeometry(QRect(590, 68, 431, 431));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Server_TableWidget->sizePolicy().hasHeightForWidth());
        Server_TableWidget->setSizePolicy(sizePolicy);
        Server_TableWidget->setMinimumSize(QSize(381, 411));
        Server_TableWidget->setAcceptDrops(true);
        Server_TableWidget->setLayoutDirection(Qt::RightToLeft);
        Server_TableWidget->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        Server_TableWidget->setFrameShape(QFrame::StyledPanel);
        Server_TableWidget->setLineWidth(0);
        Server_TableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Server_TableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Server_TableWidget->setAutoScroll(false);
        Server_TableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Server_TableWidget->setDragEnabled(true);
        Server_TableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        Server_TableWidget->setDefaultDropAction(Qt::MoveAction);
        Server_TableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        Server_TableWidget->setIconSize(QSize(40, 40));
        Server_TableWidget->setGridStyle(Qt::DashDotLine);
        Server_TableWidget->setCornerButtonEnabled(false);
        Server_TableWidget->setRowCount(10);
        Server_TableWidget->setColumnCount(10);
        Server_TableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        Server_TableWidget->horizontalHeader()->setMinimumSectionSize(40);
        Server_TableWidget->horizontalHeader()->setDefaultSectionSize(40);
        Server_TableWidget->verticalHeader()->setMinimumSectionSize(40);
        Server_TableWidget->verticalHeader()->setDefaultSectionSize(40);
        trackerButton = new QPushButton(DialogClientPlay);
        trackerButton->setObjectName("trackerButton");
        trackerButton->setGeometry(QRect(70, 510, 81, 81));
        trackerButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        atomicZone = new DraggableButton(DialogClientPlay);
        atomicZone->setObjectName("atomicZone");
        atomicZone->setGeometry(QRect(220, 340, 160, 160));
        atomicZone->setStyleSheet(QString::fromUtf8("image: url(:/redBox.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        Client_tableWidget = new GameBoard(DialogClientPlay);
        if (Client_tableWidget->columnCount() < 10)
            Client_tableWidget->setColumnCount(10);
        if (Client_tableWidget->rowCount() < 10)
            Client_tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        Client_tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        Client_tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        Client_tableWidget->setItem(0, 0, __qtablewidgetitem21);
        Client_tableWidget->setObjectName("Client_tableWidget");
        Client_tableWidget->setEnabled(true);
        Client_tableWidget->setGeometry(QRect(50, 68, 431, 431));
        sizePolicy.setHeightForWidth(Client_tableWidget->sizePolicy().hasHeightForWidth());
        Client_tableWidget->setSizePolicy(sizePolicy);
        Client_tableWidget->setMinimumSize(QSize(381, 411));
        Client_tableWidget->setAcceptDrops(true);
        Client_tableWidget->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        Client_tableWidget->setFrameShape(QFrame::StyledPanel);
        Client_tableWidget->setLineWidth(0);
        Client_tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Client_tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Client_tableWidget->setAutoScroll(false);
        Client_tableWidget->setDragEnabled(true);
        Client_tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        Client_tableWidget->setDefaultDropAction(Qt::MoveAction);
        Client_tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        Client_tableWidget->setIconSize(QSize(40, 40));
        Client_tableWidget->setGridStyle(Qt::DashDotLine);
        Client_tableWidget->setCornerButtonEnabled(false);
        Client_tableWidget->setRowCount(10);
        Client_tableWidget->setColumnCount(10);
        Client_tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        Client_tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        Client_tableWidget->horizontalHeader()->setDefaultSectionSize(40);
        Client_tableWidget->verticalHeader()->setMinimumSectionSize(40);
        Client_tableWidget->verticalHeader()->setDefaultSectionSize(40);
        trackerButton2 = new DraggableButton(DialogClientPlay);
        trackerButton2->setObjectName("trackerButton2");
        trackerButton2->setGeometry(QRect(70, 510, 80, 80));
        trackerButton2->setStyleSheet(QString::fromUtf8("image: url(:/grinTracker.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        trackerCounter = new QLabel(DialogClientPlay);
        trackerCounter->setObjectName("trackerCounter");
        trackerCounter->setGeometry(QRect(128, 568, 21, 21));
        trackerCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        trackerCounter->setAlignment(Qt::AlignCenter);
        atomicBombButton = new QPushButton(DialogClientPlay);
        atomicBombButton->setObjectName("atomicBombButton");
        atomicBombButton->setGeometry(QRect(190, 510, 81, 81));
        atomicBombButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));
        atomicBombCounter = new QLabel(DialogClientPlay);
        atomicBombCounter->setObjectName("atomicBombCounter");
        atomicBombCounter->setGeometry(QRect(250, 569, 21, 21));
        atomicBombCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        atomicBombCounter->setAlignment(Qt::AlignCenter);
        atomicZone_2 = new DraggableButton(DialogClientPlay);
        atomicZone_2->setObjectName("atomicZone_2");
        atomicZone_2->setGeometry(QRect(156, 440, 160, 160));
        atomicZone_2->setStyleSheet(QString::fromUtf8("image: url(:/redBox.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        linearAttackbutton = new QPushButton(DialogClientPlay);
        linearAttackbutton->setObjectName("linearAttackbutton");
        linearAttackbutton->setGeometry(QRect(330, 510, 81, 81));
        linearAttackbutton->setStyleSheet(QString::fromUtf8("image: url(:/squareAttackFliped.png);"));
        linearAttackCounter = new QLabel(DialogClientPlay);
        linearAttackCounter->setObjectName("linearAttackCounter");
        linearAttackCounter->setGeometry(QRect(390, 570, 21, 21));
        linearAttackCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        linearAttackCounter->setAlignment(Qt::AlignCenter);
        planeLabel = new QPushButton(DialogClientPlay);
        planeLabel->setObjectName("planeLabel");
        planeLabel->setGeometry(QRect(30, 40, 101, 61));
        planeLabel->setStyleSheet(QString::fromUtf8("background-image: url(:/squareAttackFliped.png);"));

        retranslateUi(DialogClientPlay);

        QMetaObject::connectSlotsByName(DialogClientPlay);
    } // setupUi

    void retranslateUi(QDialog *DialogClientPlay)
    {
        DialogClientPlay->setWindowTitle(QCoreApplication::translate("DialogClientPlay", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Server_TableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogClientPlay", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Server_TableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogClientPlay", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Server_TableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogClientPlay", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Server_TableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogClientPlay", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Server_TableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogClientPlay", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Server_TableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogClientPlay", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Server_TableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogClientPlay", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Server_TableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogClientPlay", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Server_TableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogClientPlay", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Server_TableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogClientPlay", "J", nullptr));

        const bool __sortingEnabled = Server_TableWidget->isSortingEnabled();
        Server_TableWidget->setSortingEnabled(false);
        Server_TableWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        Server_TableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        trackerButton->setText(QString());
        atomicZone->setText(QString());
        QTableWidgetItem *___qtablewidgetitem10 = Client_tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DialogClientPlay", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = Client_tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DialogClientPlay", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = Client_tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DialogClientPlay", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = Client_tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DialogClientPlay", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = Client_tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DialogClientPlay", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = Client_tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DialogClientPlay", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = Client_tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DialogClientPlay", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = Client_tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DialogClientPlay", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = Client_tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DialogClientPlay", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = Client_tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DialogClientPlay", "J", nullptr));

        const bool __sortingEnabled1 = Client_tableWidget->isSortingEnabled();
        Client_tableWidget->setSortingEnabled(false);
        Client_tableWidget->setSortingEnabled(__sortingEnabled1);

#if QT_CONFIG(accessibility)
        Client_tableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        trackerButton2->setText(QString());
        trackerCounter->setText(QCoreApplication::translate("DialogClientPlay", "0", nullptr));
        atomicBombButton->setText(QString());
        atomicBombCounter->setText(QCoreApplication::translate("DialogClientPlay", "0", nullptr));
        atomicZone_2->setText(QString());
        linearAttackbutton->setText(QString());
        linearAttackCounter->setText(QCoreApplication::translate("DialogClientPlay", "0", nullptr));
        planeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogClientPlay: public Ui_DialogClientPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCLIENTPLAY_H
