/********************************************************************************
** Form generated from reading UI file 'dialoggameai.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGAMEAI_H
#define UI_DIALOGGAMEAI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <gameboard.h>

QT_BEGIN_NAMESPACE

class Ui_DialogGameAI
{
public:
    GameBoard *tableWidget;
    GameBoard *botTableWidget;
    QLabel *label;
    QPushButton *linearAttackbutton;
    QPushButton *atomicBombButton;
    QPushButton *trackerButton;
    QLabel *trackerCounter;
    QLabel *atomicBombCounter;
    QLabel *linearAttackCounter;

    void setupUi(QDialog *DialogGameAI)
    {
        if (DialogGameAI->objectName().isEmpty())
            DialogGameAI->setObjectName("DialogGameAI");
        DialogGameAI->resize(1046, 597);
        DialogGameAI->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        tableWidget = new GameBoard(DialogGameAI);
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
        botTableWidget = new GameBoard(DialogGameAI);
        if (botTableWidget->columnCount() < 10)
            botTableWidget->setColumnCount(10);
        if (botTableWidget->rowCount() < 10)
            botTableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        botTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        botTableWidget->setVerticalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        botTableWidget->setItem(0, 0, __qtablewidgetitem21);
        botTableWidget->setObjectName("botTableWidget");
        botTableWidget->setEnabled(true);
        botTableWidget->setGeometry(QRect(590, 68, 431, 431));
        sizePolicy.setHeightForWidth(botTableWidget->sizePolicy().hasHeightForWidth());
        botTableWidget->setSizePolicy(sizePolicy);
        botTableWidget->setMinimumSize(QSize(381, 411));
        botTableWidget->setAcceptDrops(true);
        botTableWidget->setLayoutDirection(Qt::RightToLeft);
        botTableWidget->setStyleSheet(QString::fromUtf8("font: 15pt \"BYRIL_Sea_Battle2\";\n"
"\n"
"color: rgb(41, 134, 255);\n"
"\n"
"selection-background-color: rgb(0, 170, 255);\n"
"\n"
"gridline-color: rgb(48, 165, 255);"));
        botTableWidget->setFrameShape(QFrame::StyledPanel);
        botTableWidget->setLineWidth(0);
        botTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        botTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        botTableWidget->setAutoScroll(false);
        botTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        botTableWidget->setDragEnabled(true);
        botTableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        botTableWidget->setDefaultDropAction(Qt::MoveAction);
        botTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        botTableWidget->setIconSize(QSize(40, 40));
        botTableWidget->setGridStyle(Qt::DashDotLine);
        botTableWidget->setCornerButtonEnabled(false);
        botTableWidget->setRowCount(10);
        botTableWidget->setColumnCount(10);
        botTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        botTableWidget->horizontalHeader()->setMinimumSectionSize(40);
        botTableWidget->horizontalHeader()->setDefaultSectionSize(40);
        botTableWidget->verticalHeader()->setMinimumSectionSize(40);
        botTableWidget->verticalHeader()->setDefaultSectionSize(40);
        label = new QLabel(DialogGameAI);
        label->setObjectName("label");
        label->setGeometry(QRect(510, 250, 41, 101));
        label->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));
        linearAttackbutton = new QPushButton(DialogGameAI);
        linearAttackbutton->setObjectName("linearAttackbutton");
        linearAttackbutton->setGeometry(QRect(400, 503, 81, 81));
        linearAttackbutton->setStyleSheet(QString::fromUtf8("image: url(:/squareAttackFliped.png);"));
        atomicBombButton = new QPushButton(DialogGameAI);
        atomicBombButton->setObjectName("atomicBombButton");
        atomicBombButton->setGeometry(QRect(230, 505, 81, 81));
        atomicBombButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));
        trackerButton = new QPushButton(DialogGameAI);
        trackerButton->setObjectName("trackerButton");
        trackerButton->setGeometry(QRect(50, 506, 81, 81));
        trackerButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        trackerCounter = new QLabel(DialogGameAI);
        trackerCounter->setObjectName("trackerCounter");
        trackerCounter->setGeometry(QRect(109, 564, 21, 21));
        trackerCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        trackerCounter->setAlignment(Qt::AlignCenter);
        atomicBombCounter = new QLabel(DialogGameAI);
        atomicBombCounter->setObjectName("atomicBombCounter");
        atomicBombCounter->setGeometry(QRect(290, 564, 21, 21));
        atomicBombCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        atomicBombCounter->setAlignment(Qt::AlignCenter);
        linearAttackCounter = new QLabel(DialogGameAI);
        linearAttackCounter->setObjectName("linearAttackCounter");
        linearAttackCounter->setGeometry(QRect(459, 562, 21, 21));
        linearAttackCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        linearAttackCounter->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogGameAI);

        QMetaObject::connectSlotsByName(DialogGameAI);
    } // setupUi

    void retranslateUi(QDialog *DialogGameAI)
    {
        DialogGameAI->setWindowTitle(QCoreApplication::translate("DialogGameAI", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogGameAI", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogGameAI", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogGameAI", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogGameAI", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogGameAI", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogGameAI", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogGameAI", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogGameAI", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogGameAI", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogGameAI", "J", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        tableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        QTableWidgetItem *___qtablewidgetitem10 = botTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DialogGameAI", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = botTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DialogGameAI", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = botTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DialogGameAI", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = botTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DialogGameAI", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = botTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DialogGameAI", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = botTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DialogGameAI", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = botTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DialogGameAI", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = botTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DialogGameAI", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = botTableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DialogGameAI", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = botTableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DialogGameAI", "J", nullptr));

        const bool __sortingEnabled1 = botTableWidget->isSortingEnabled();
        botTableWidget->setSortingEnabled(false);
        botTableWidget->setSortingEnabled(__sortingEnabled1);

#if QT_CONFIG(accessibility)
        botTableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        label->setText(QString());
        linearAttackbutton->setText(QString());
        atomicBombButton->setText(QString());
        trackerButton->setText(QString());
        trackerCounter->setText(QCoreApplication::translate("DialogGameAI", "0", nullptr));
        atomicBombCounter->setText(QCoreApplication::translate("DialogGameAI", "0", nullptr));
        linearAttackCounter->setText(QCoreApplication::translate("DialogGameAI", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogGameAI: public Ui_DialogGameAI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGAMEAI_H
