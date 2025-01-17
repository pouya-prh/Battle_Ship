/********************************************************************************
** Form generated from reading UI file 'dialogserversetgameboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSERVERSETGAMEBOARD_H
#define UI_DIALOGSERVERSETGAMEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <gameboard.h>
#include "draggablebutton.h"

QT_BEGIN_NAMESPACE

class Ui_DialogServerSetGameBoard
{
public:
    QPushButton *randomSetButton;
    DraggableButton *airDefance1;
    GameBoard *tableWidget;
    DraggableButton *airDefance2;
    DraggableButton *mine1;
    DraggableButton *ship41;
    DraggableButton *ship31;
    DraggableButton *ship12;
    DraggableButton *ship22;
    DraggableButton *ship21;
    DraggableButton *ship32;
    DraggableButton *ship11;
    QPushButton *nextButton;
    DraggableButton *mine2;
    DraggableButton *ship23;
    DraggableButton *ship13;

    void setupUi(QDialog *DialogServerSetGameBoard)
    {
        if (DialogServerSetGameBoard->objectName().isEmpty())
            DialogServerSetGameBoard->setObjectName("DialogServerSetGameBoard");
        DialogServerSetGameBoard->resize(1050, 600);
        DialogServerSetGameBoard->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        randomSetButton = new QPushButton(DialogServerSetGameBoard);
        randomSetButton->setObjectName("randomSetButton");
        randomSetButton->setGeometry(QRect(550, 210, 81, 171));
        randomSetButton->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"image: url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"));
        airDefance1 = new DraggableButton(DialogServerSetGameBoard);
        airDefance1->setObjectName("airDefance1");
        airDefance1->setGeometry(QRect(730, 101, 40, 40));
        airDefance1->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/airDefense.png);"));
        airDefance1->setIconSize(QSize(40, 40));
        tableWidget = new GameBoard(DialogServerSetGameBoard);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QFont font;
        font.setWeight(QFont::Thin);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(50, 68, 431, 431));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(381, 411));
        tableWidget->setAcceptDrops(true);
        tableWidget->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setLineWidth(0);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setAutoScroll(false);
        tableWidget->setDragEnabled(true);
        tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        tableWidget->setDefaultDropAction(Qt::MoveAction);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setIconSize(QSize(40, 40));
        tableWidget->setGridStyle(Qt::DashDotLine);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(10);
        tableWidget->setColumnCount(10);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        tableWidget->horizontalHeader()->setDefaultSectionSize(40);
        tableWidget->verticalHeader()->setMinimumSectionSize(40);
        tableWidget->verticalHeader()->setDefaultSectionSize(40);
        airDefance2 = new DraggableButton(DialogServerSetGameBoard);
        airDefance2->setObjectName("airDefance2");
        airDefance2->setGeometry(QRect(680, 102, 40, 40));
        airDefance2->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/airDefense.png);"));
        airDefance2->setIconSize(QSize(40, 40));
        mine1 = new DraggableButton(DialogServerSetGameBoard);
        mine1->setObjectName("mine1");
        mine1->setGeometry(QRect(730, 50, 40, 40));
        mine1->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/mine2.png);"));
        mine1->setIconSize(QSize(40, 40));
        ship41 = new DraggableButton(DialogServerSetGameBoard);
        ship41->setObjectName("ship41");
        ship41->setGeometry(QRect(808, 411, 160, 40));
        ship41->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship4.PNG);\n"
""));
        ship41->setIconSize(QSize(160, 40));
        ship31 = new DraggableButton(DialogServerSetGameBoard);
        ship31->setObjectName("ship31");
        ship31->setGeometry(QRect(840, 325, 120, 40));
        ship31->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship3.PNG);"));
        ship31->setIconSize(QSize(120, 40));
        ship12 = new DraggableButton(DialogServerSetGameBoard);
        ship12->setObjectName("ship12");
        ship12->setGeometry(QRect(920, 111, 40, 40));
        ship12->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship1.PNG);"));
        ship12->setIconSize(QSize(40, 40));
        ship22 = new DraggableButton(DialogServerSetGameBoard);
        ship22->setObjectName("ship22");
        ship22->setGeometry(QRect(880, 237, 80, 40));
        ship22->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship2.PNG);"));
        ship22->setIconSize(QSize(80, 40));
        ship21 = new DraggableButton(DialogServerSetGameBoard);
        ship21->setObjectName("ship21");
        ship21->setGeometry(QRect(880, 196, 80, 40));
        ship21->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship2.PNG);"));
        ship21->setIconSize(QSize(80, 40));
        ship32 = new DraggableButton(DialogServerSetGameBoard);
        ship32->setObjectName("ship32");
        ship32->setGeometry(QRect(840, 369, 120, 40));
        ship32->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship3.PNG);"));
        ship32->setIconSize(QSize(120, 40));
        ship11 = new DraggableButton(DialogServerSetGameBoard);
        ship11->setObjectName("ship11");
        ship11->setGeometry(QRect(920, 154, 40, 40));
        ship11->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship1.PNG);"));
        ship11->setIconSize(QSize(40, 40));
        nextButton = new QPushButton(DialogServerSetGameBoard);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(750, 511, 221, 51));
        nextButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
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
        mine2 = new DraggableButton(DialogServerSetGameBoard);
        mine2->setObjectName("mine2");
        mine2->setGeometry(QRect(680, 51, 40, 40));
        mine2->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/mine2.png);"));
        mine2->setIconSize(QSize(40, 40));
        ship23 = new DraggableButton(DialogServerSetGameBoard);
        ship23->setObjectName("ship23");
        ship23->setGeometry(QRect(880, 281, 80, 40));
        ship23->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship2.PNG);"));
        ship23->setIconSize(QSize(80, 40));
        ship13 = new DraggableButton(DialogServerSetGameBoard);
        ship13->setObjectName("ship13");
        ship13->setGeometry(QRect(920, 64, 40, 40));
        ship13->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship1.PNG);\n"
""));
        ship13->setIconSize(QSize(40, 40));

        retranslateUi(DialogServerSetGameBoard);

        QMetaObject::connectSlotsByName(DialogServerSetGameBoard);
    } // setupUi

    void retranslateUi(QDialog *DialogServerSetGameBoard)
    {
        DialogServerSetGameBoard->setWindowTitle(QCoreApplication::translate("DialogServerSetGameBoard", "Dialog", nullptr));
        randomSetButton->setText(QString());
        airDefance1->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogServerSetGameBoard", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogServerSetGameBoard", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogServerSetGameBoard", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogServerSetGameBoard", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogServerSetGameBoard", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogServerSetGameBoard", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogServerSetGameBoard", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogServerSetGameBoard", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogServerSetGameBoard", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogServerSetGameBoard", "J", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        tableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        airDefance2->setText(QString());
        mine1->setText(QString());
        ship41->setText(QString());
        ship31->setText(QString());
        ship12->setText(QString());
        ship22->setText(QString());
        ship21->setText(QString());
        ship32->setText(QString());
        ship11->setText(QString());
        nextButton->setText(QCoreApplication::translate("DialogServerSetGameBoard", "Next", nullptr));
        mine2->setText(QString());
        ship23->setText(QString());
        ship13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogServerSetGameBoard: public Ui_DialogServerSetGameBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSERVERSETGAMEBOARD_H
