/********************************************************************************
** Form generated from reading UI file 'dialogsetgameboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETGAMEBOARD_H
#define UI_DIALOGSETGAMEBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "draggablebutton.h"
#include "gameboard.h"

QT_BEGIN_NAMESPACE

class Ui_DialogSetGameBoard
{
public:
    GameBoard *tableWidget;
    DraggableButton *ship13;
    DraggableButton *ship12;
    DraggableButton *ship11;
    DraggableButton *ship21;
    DraggableButton *ship22;
    DraggableButton *ship23;
    DraggableButton *ship31;
    DraggableButton *ship32;
    DraggableButton *ship41;
    QPushButton *randomSetButton;
    QPushButton *nextButton;
    QLabel *label;

    void setupUi(QDialog *DialogSetGameBoard)
    {
        if (DialogSetGameBoard->objectName().isEmpty())
            DialogSetGameBoard->setObjectName("DialogSetGameBoard");
        DialogSetGameBoard->resize(987, 596);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recommended Source Files/Recommended Source Files/Images/mipmap-hdpi-v4/ic_launcher_round.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogSetGameBoard->setWindowIcon(icon);
        DialogSetGameBoard->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        tableWidget = new GameBoard(DialogSetGameBoard);
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
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem11);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 60, 431, 441));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(381, 411));
        tableWidget->setAcceptDrops(true);
        tableWidget->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"background-color: rgb(0, 0, 255);\n"
"color: rgb(41, 134, 255);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setLineWidth(0);
        tableWidget->setDragEnabled(true);
        tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        tableWidget->setDefaultDropAction(Qt::MoveAction);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setGridStyle(Qt::DashDotLine);
        tableWidget->setColumnCount(10);
        tableWidget->horizontalHeader()->setDefaultSectionSize(40);
        tableWidget->verticalHeader()->setDefaultSectionSize(40);
        ship13 = new DraggableButton(DialogSetGameBoard);
        ship13->setObjectName("ship13");
        ship13->setGeometry(QRect(920, 50, 40, 40));
        ship13->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship1.PNG);\n"
""));
        ship12 = new DraggableButton(DialogSetGameBoard);
        ship12->setObjectName("ship12");
        ship12->setGeometry(QRect(920, 100, 40, 40));
        ship12->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship1.PNG);"));
        ship11 = new DraggableButton(DialogSetGameBoard);
        ship11->setObjectName("ship11");
        ship11->setGeometry(QRect(920, 143, 40, 40));
        ship11->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship1.PNG);"));
        ship21 = new DraggableButton(DialogSetGameBoard);
        ship21->setObjectName("ship21");
        ship21->setGeometry(QRect(880, 185, 80, 40));
        ship21->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship2.PNG);"));
        ship22 = new DraggableButton(DialogSetGameBoard);
        ship22->setObjectName("ship22");
        ship22->setGeometry(QRect(880, 226, 80, 40));
        ship22->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship2.PNG);"));
        ship23 = new DraggableButton(DialogSetGameBoard);
        ship23->setObjectName("ship23");
        ship23->setGeometry(QRect(880, 270, 80, 40));
        ship23->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship2.PNG);"));
        ship31 = new DraggableButton(DialogSetGameBoard);
        ship31->setObjectName("ship31");
        ship31->setGeometry(QRect(840, 314, 120, 40));
        ship31->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship3.PNG);"));
        ship32 = new DraggableButton(DialogSetGameBoard);
        ship32->setObjectName("ship32");
        ship32->setGeometry(QRect(840, 358, 120, 40));
        ship32->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship3.PNG);"));
        ship41 = new DraggableButton(DialogSetGameBoard);
        ship41->setObjectName("ship41");
        ship41->setGeometry(QRect(800, 400, 160, 40));
        ship41->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/ship4.PNG);"));
        randomSetButton = new QPushButton(DialogSetGameBoard);
        randomSetButton->setObjectName("randomSetButton");
        randomSetButton->setGeometry(QRect(553, 219, 81, 171));
        randomSetButton->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"image: url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"));
        nextButton = new QPushButton(DialogSetGameBoard);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(730, 500, 221, 51));
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
        label = new QLabel(DialogSetGameBoard);
        label->setObjectName("label");
        label->setGeometry(QRect(740, 30, 31, 461));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"background-color: rgb(85, 0, 255);\n"
"font: 15pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 0, 255);\n"
""));

        retranslateUi(DialogSetGameBoard);

        QMetaObject::connectSlotsByName(DialogSetGameBoard);
    } // setupUi

    void retranslateUi(QDialog *DialogSetGameBoard)
    {
        DialogSetGameBoard->setWindowTitle(QCoreApplication::translate("DialogSetGameBoard", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogSetGameBoard", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogSetGameBoard", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogSetGameBoard", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogSetGameBoard", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogSetGameBoard", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogSetGameBoard", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogSetGameBoard", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogSetGameBoard", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogSetGameBoard", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogSetGameBoard", "J", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        ship13->setText(QString());
        ship12->setText(QString());
        ship11->setText(QString());
        ship21->setText(QString());
        ship22->setText(QString());
        ship23->setText(QString());
        ship31->setText(QString());
        ship32->setText(QString());
        ship41->setText(QString());
        randomSetButton->setText(QString());
        nextButton->setText(QCoreApplication::translate("DialogSetGameBoard", "Next", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogSetGameBoard: public Ui_DialogSetGameBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETGAMEBOARD_H
