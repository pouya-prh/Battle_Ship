/********************************************************************************
** Form generated from reading UI file 'dialogplaytogether.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPLAYTOGETHER_H
#define UI_DIALOGPLAYTOGETHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <gameboard.h>
#include "draggablebutton.h"

QT_BEGIN_NAMESPACE

class Ui_DialogPlaytogether
{
public:
    QLabel *AtomicBombCounter2;
    GameBoard *player2_table;
    QPushButton *atomicBomb1;
    GameBoard *player1_table;
    QPushButton *trackerButton1;
    QPushButton *linearAttack1;
    DraggableButton *atomicZone1;
    QPushButton *atomicBomb2;
    QLabel *tracker2_Counter;
    DraggableButton *trackerButton2_D;
    QPushButton *trackerButton2;
    QPushButton *planeLabel1;
    QPushButton *linearAttackbutton2;
    QPushButton *planeLabel2;
    QLabel *tracker1_Counter;
    QLabel *AtomicBombCounter1;
    DraggableButton *trackerButton1_D;
    QLabel *turnLabel;
    DraggableButton *atomicZone2;
    QLabel *linearAttackCounter1;
    QLabel *linearAttackCounter2;

    void setupUi(QDialog *DialogPlaytogether)
    {
        if (DialogPlaytogether->objectName().isEmpty())
            DialogPlaytogether->setObjectName("DialogPlaytogether");
        DialogPlaytogether->resize(1050, 599);
        DialogPlaytogether->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        AtomicBombCounter2 = new QLabel(DialogPlaytogether);
        AtomicBombCounter2->setObjectName("AtomicBombCounter2");
        AtomicBombCounter2->setGeometry(QRect(800, 570, 21, 21));
        AtomicBombCounter2->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        AtomicBombCounter2->setAlignment(Qt::AlignCenter);
        player2_table = new GameBoard(DialogPlaytogether);
        if (player2_table->columnCount() < 10)
            player2_table->setColumnCount(10);
        if (player2_table->rowCount() < 10)
            player2_table->setRowCount(10);
        QFont font;
        font.setWeight(QFont::Thin);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        player2_table->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        player2_table->setItem(0, 0, __qtablewidgetitem10);
        player2_table->setObjectName("player2_table");
        player2_table->setEnabled(true);
        player2_table->setGeometry(QRect(590, 68, 431, 431));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(player2_table->sizePolicy().hasHeightForWidth());
        player2_table->setSizePolicy(sizePolicy);
        player2_table->setMinimumSize(QSize(381, 411));
        player2_table->setAcceptDrops(true);
        player2_table->setLayoutDirection(Qt::RightToLeft);
        player2_table->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        player2_table->setFrameShape(QFrame::StyledPanel);
        player2_table->setLineWidth(0);
        player2_table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        player2_table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        player2_table->setAutoScroll(false);
        player2_table->setDragEnabled(true);
        player2_table->setDragDropMode(QAbstractItemView::DragDrop);
        player2_table->setDefaultDropAction(Qt::MoveAction);
        player2_table->setSelectionMode(QAbstractItemView::NoSelection);
        player2_table->setIconSize(QSize(40, 40));
        player2_table->setGridStyle(Qt::DashDotLine);
        player2_table->setCornerButtonEnabled(false);
        player2_table->setRowCount(10);
        player2_table->setColumnCount(10);
        player2_table->horizontalHeader()->setCascadingSectionResizes(false);
        player2_table->horizontalHeader()->setMinimumSectionSize(40);
        player2_table->horizontalHeader()->setDefaultSectionSize(40);
        player2_table->verticalHeader()->setMinimumSectionSize(40);
        player2_table->verticalHeader()->setDefaultSectionSize(40);
        atomicBomb1 = new QPushButton(DialogPlaytogether);
        atomicBomb1->setObjectName("atomicBomb1");
        atomicBomb1->setGeometry(QRect(170, 509, 81, 81));
        atomicBomb1->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));
        player1_table = new GameBoard(DialogPlaytogether);
        if (player1_table->columnCount() < 10)
            player1_table->setColumnCount(10);
        if (player1_table->rowCount() < 10)
            player1_table->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        player1_table->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        player1_table->setItem(0, 0, __qtablewidgetitem21);
        player1_table->setObjectName("player1_table");
        player1_table->setEnabled(true);
        player1_table->setGeometry(QRect(50, 68, 431, 431));
        sizePolicy.setHeightForWidth(player1_table->sizePolicy().hasHeightForWidth());
        player1_table->setSizePolicy(sizePolicy);
        player1_table->setMinimumSize(QSize(381, 411));
        player1_table->setAcceptDrops(true);
        player1_table->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        player1_table->setFrameShape(QFrame::StyledPanel);
        player1_table->setLineWidth(0);
        player1_table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        player1_table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        player1_table->setAutoScroll(false);
        player1_table->setDragEnabled(true);
        player1_table->setDragDropMode(QAbstractItemView::DragDrop);
        player1_table->setDefaultDropAction(Qt::MoveAction);
        player1_table->setSelectionMode(QAbstractItemView::NoSelection);
        player1_table->setIconSize(QSize(40, 40));
        player1_table->setGridStyle(Qt::DashDotLine);
        player1_table->setCornerButtonEnabled(false);
        player1_table->setRowCount(10);
        player1_table->setColumnCount(10);
        player1_table->horizontalHeader()->setCascadingSectionResizes(false);
        player1_table->horizontalHeader()->setMinimumSectionSize(40);
        player1_table->horizontalHeader()->setDefaultSectionSize(40);
        player1_table->verticalHeader()->setMinimumSectionSize(40);
        player1_table->verticalHeader()->setDefaultSectionSize(40);
        trackerButton1 = new QPushButton(DialogPlaytogether);
        trackerButton1->setObjectName("trackerButton1");
        trackerButton1->setGeometry(QRect(24, 509, 81, 81));
        trackerButton1->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        linearAttack1 = new QPushButton(DialogPlaytogether);
        linearAttack1->setObjectName("linearAttack1");
        linearAttack1->setGeometry(QRect(310, 510, 81, 81));
        linearAttack1->setStyleSheet(QString::fromUtf8("image: url(:/squareAttackFliped.png);"));
        atomicZone1 = new DraggableButton(DialogPlaytogether);
        atomicZone1->setObjectName("atomicZone1");
        atomicZone1->setGeometry(QRect(130, 431, 160, 160));
        atomicZone1->setStyleSheet(QString::fromUtf8("image: url(:/redBox.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        atomicBomb2 = new QPushButton(DialogPlaytogether);
        atomicBomb2->setObjectName("atomicBomb2");
        atomicBomb2->setGeometry(QRect(800, 510, 81, 81));
        atomicBomb2->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));
        tracker2_Counter = new QLabel(DialogPlaytogether);
        tracker2_Counter->setObjectName("tracker2_Counter");
        tracker2_Counter->setGeometry(QRect(924, 563, 21, 21));
        tracker2_Counter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        tracker2_Counter->setAlignment(Qt::AlignCenter);
        trackerButton2_D = new DraggableButton(DialogPlaytogether);
        trackerButton2_D->setObjectName("trackerButton2_D");
        trackerButton2_D->setGeometry(QRect(940, 470, 80, 80));
        trackerButton2_D->setStyleSheet(QString::fromUtf8("image: url(:/grinTracker.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        trackerButton2 = new QPushButton(DialogPlaytogether);
        trackerButton2->setObjectName("trackerButton2");
        trackerButton2->setGeometry(QRect(922, 507, 81, 81));
        trackerButton2->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        planeLabel1 = new QPushButton(DialogPlaytogether);
        planeLabel1->setObjectName("planeLabel1");
        planeLabel1->setGeometry(QRect(0, 20, 101, 61));
        planeLabel1->setStyleSheet(QString::fromUtf8("background-image: url(:/squareAttackFliped.png);"));
        linearAttackbutton2 = new QPushButton(DialogPlaytogether);
        linearAttackbutton2->setObjectName("linearAttackbutton2");
        linearAttackbutton2->setGeometry(QRect(670, 510, 81, 81));
        linearAttackbutton2->setStyleSheet(QString::fromUtf8("image: url(:/squareAttackFliped.png);"));
        planeLabel2 = new QPushButton(DialogPlaytogether);
        planeLabel2->setObjectName("planeLabel2");
        planeLabel2->setGeometry(QRect(870, 10, 101, 61));
        planeLabel2->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/square attack.png);"));
        tracker1_Counter = new QLabel(DialogPlaytogether);
        tracker1_Counter->setObjectName("tracker1_Counter");
        tracker1_Counter->setGeometry(QRect(81, 567, 21, 21));
        tracker1_Counter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        tracker1_Counter->setAlignment(Qt::AlignCenter);
        AtomicBombCounter1 = new QLabel(DialogPlaytogether);
        AtomicBombCounter1->setObjectName("AtomicBombCounter1");
        AtomicBombCounter1->setGeometry(QRect(228, 567, 21, 21));
        AtomicBombCounter1->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        AtomicBombCounter1->setAlignment(Qt::AlignCenter);
        trackerButton1_D = new DraggableButton(DialogPlaytogether);
        trackerButton1_D->setObjectName("trackerButton1_D");
        trackerButton1_D->setGeometry(QRect(30, 480, 80, 80));
        trackerButton1_D->setStyleSheet(QString::fromUtf8("image: url(:/grinTracker.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        turnLabel = new QLabel(DialogPlaytogether);
        turnLabel->setObjectName("turnLabel");
        turnLabel->setGeometry(QRect(513, 250, 41, 101));
        turnLabel->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        atomicZone2 = new DraggableButton(DialogPlaytogether);
        atomicZone2->setObjectName("atomicZone2");
        atomicZone2->setGeometry(QRect(760, 440, 160, 160));
        atomicZone2->setStyleSheet(QString::fromUtf8("image: url(:/redBox.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        linearAttackCounter1 = new QLabel(DialogPlaytogether);
        linearAttackCounter1->setObjectName("linearAttackCounter1");
        linearAttackCounter1->setGeometry(QRect(370, 570, 21, 21));
        linearAttackCounter1->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        linearAttackCounter1->setAlignment(Qt::AlignCenter);
        linearAttackCounter2 = new QLabel(DialogPlaytogether);
        linearAttackCounter2->setObjectName("linearAttackCounter2");
        linearAttackCounter2->setGeometry(QRect(671, 570, 21, 21));
        linearAttackCounter2->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        linearAttackCounter2->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogPlaytogether);

        QMetaObject::connectSlotsByName(DialogPlaytogether);
    } // setupUi

    void retranslateUi(QDialog *DialogPlaytogether)
    {
        DialogPlaytogether->setWindowTitle(QCoreApplication::translate("DialogPlaytogether", "Dialog", nullptr));
        AtomicBombCounter2->setText(QCoreApplication::translate("DialogPlaytogether", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem = player2_table->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogPlaytogether", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = player2_table->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogPlaytogether", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = player2_table->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogPlaytogether", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = player2_table->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogPlaytogether", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = player2_table->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogPlaytogether", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = player2_table->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogPlaytogether", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = player2_table->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogPlaytogether", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = player2_table->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogPlaytogether", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = player2_table->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogPlaytogether", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = player2_table->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogPlaytogether", "J", nullptr));

        const bool __sortingEnabled = player2_table->isSortingEnabled();
        player2_table->setSortingEnabled(false);
        player2_table->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        player2_table->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        atomicBomb1->setText(QString());
        QTableWidgetItem *___qtablewidgetitem10 = player1_table->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DialogPlaytogether", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = player1_table->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DialogPlaytogether", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = player1_table->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DialogPlaytogether", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = player1_table->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DialogPlaytogether", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = player1_table->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DialogPlaytogether", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = player1_table->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DialogPlaytogether", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = player1_table->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DialogPlaytogether", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = player1_table->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DialogPlaytogether", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = player1_table->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DialogPlaytogether", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = player1_table->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DialogPlaytogether", "J", nullptr));

        const bool __sortingEnabled1 = player1_table->isSortingEnabled();
        player1_table->setSortingEnabled(false);
        player1_table->setSortingEnabled(__sortingEnabled1);

#if QT_CONFIG(accessibility)
        player1_table->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        trackerButton1->setText(QString());
        linearAttack1->setText(QString());
        atomicZone1->setText(QString());
        atomicBomb2->setText(QString());
        tracker2_Counter->setText(QCoreApplication::translate("DialogPlaytogether", "0", nullptr));
        trackerButton2_D->setText(QString());
        trackerButton2->setText(QString());
        planeLabel1->setText(QString());
        linearAttackbutton2->setText(QString());
        planeLabel2->setText(QString());
        tracker1_Counter->setText(QCoreApplication::translate("DialogPlaytogether", "0", nullptr));
        AtomicBombCounter1->setText(QCoreApplication::translate("DialogPlaytogether", "0", nullptr));
        trackerButton1_D->setText(QString());
        turnLabel->setText(QString());
        atomicZone2->setText(QString());
        linearAttackCounter1->setText(QCoreApplication::translate("DialogPlaytogether", "0", nullptr));
        linearAttackCounter2->setText(QCoreApplication::translate("DialogPlaytogether", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPlaytogether: public Ui_DialogPlaytogether {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPLAYTOGETHER_H
