/********************************************************************************
** Form generated from reading UI file 'dialogondevice.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGONDEVICE_H
#define UI_DIALOGONDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <gameboard.h>

QT_BEGIN_NAMESPACE

class Ui_DialogOnDevice
{
public:
    GameBoard *player1_table;
    GameBoard *player2_table;
    QLabel *turnLabel;

    void setupUi(QDialog *DialogOnDevice)
    {
        if (DialogOnDevice->objectName().isEmpty())
            DialogOnDevice->setObjectName("DialogOnDevice");
        DialogOnDevice->resize(1050, 600);
        DialogOnDevice->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        player1_table = new GameBoard(DialogOnDevice);
        if (player1_table->columnCount() < 10)
            player1_table->setColumnCount(10);
        if (player1_table->rowCount() < 10)
            player1_table->setRowCount(10);
        QFont font;
        font.setWeight(QFont::Thin);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        player1_table->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        player1_table->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        player1_table->setItem(0, 0, __qtablewidgetitem10);
        player1_table->setObjectName("player1_table");
        player1_table->setEnabled(true);
        player1_table->setGeometry(QRect(50, 68, 431, 431));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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
        player2_table = new GameBoard(DialogOnDevice);
        if (player2_table->columnCount() < 10)
            player2_table->setColumnCount(10);
        if (player2_table->rowCount() < 10)
            player2_table->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        player2_table->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        player2_table->setVerticalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        player2_table->setItem(0, 0, __qtablewidgetitem21);
        player2_table->setObjectName("player2_table");
        player2_table->setEnabled(true);
        player2_table->setGeometry(QRect(590, 68, 431, 431));
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
        turnLabel = new QLabel(DialogOnDevice);
        turnLabel->setObjectName("turnLabel");
        turnLabel->setGeometry(QRect(512, 250, 41, 101));
        turnLabel->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);\n"
"background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);"));

        retranslateUi(DialogOnDevice);

        QMetaObject::connectSlotsByName(DialogOnDevice);
    } // setupUi

    void retranslateUi(QDialog *DialogOnDevice)
    {
        DialogOnDevice->setWindowTitle(QCoreApplication::translate("DialogOnDevice", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = player1_table->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogOnDevice", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = player1_table->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogOnDevice", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = player1_table->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogOnDevice", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = player1_table->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogOnDevice", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = player1_table->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogOnDevice", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = player1_table->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogOnDevice", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = player1_table->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogOnDevice", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = player1_table->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogOnDevice", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = player1_table->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogOnDevice", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = player1_table->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogOnDevice", "J", nullptr));

        const bool __sortingEnabled = player1_table->isSortingEnabled();
        player1_table->setSortingEnabled(false);
        player1_table->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        player1_table->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        QTableWidgetItem *___qtablewidgetitem10 = player2_table->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DialogOnDevice", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = player2_table->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DialogOnDevice", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = player2_table->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DialogOnDevice", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = player2_table->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DialogOnDevice", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = player2_table->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DialogOnDevice", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = player2_table->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DialogOnDevice", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = player2_table->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DialogOnDevice", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = player2_table->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DialogOnDevice", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = player2_table->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DialogOnDevice", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = player2_table->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DialogOnDevice", "J", nullptr));

        const bool __sortingEnabled1 = player2_table->isSortingEnabled();
        player2_table->setSortingEnabled(false);
        player2_table->setSortingEnabled(__sortingEnabled1);

#if QT_CONFIG(accessibility)
        player2_table->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        turnLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogOnDevice: public Ui_DialogOnDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGONDEVICE_H
