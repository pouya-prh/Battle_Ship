/********************************************************************************
** Form generated from reading UI file 'dialogservergetam.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSERVERGETAM_H
#define UI_DIALOGSERVERGETAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <gameboard.h>

QT_BEGIN_NAMESPACE

class Ui_DialogServerGetAm
{
public:
    QPushButton *trackerButton;
    QPushButton *atomicBombButton;
    QPushButton *airDefanceButton;
    GameBoard *tableWidget;
    QLabel *trackerCounter;
    QPushButton *nextButton;
    QPushButton *linearAttackButton;
    QPushButton *mineButton;
    QLabel *atomicBombCounter;
    QLabel *label_2;
    QLabel *mineCounter;
    QLabel *label;
    QLabel *airDefanceCounter;
    QLabel *label_5;
    QLabel *linearAttackCounter;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QDialog *DialogServerGetAm)
    {
        if (DialogServerGetAm->objectName().isEmpty())
            DialogServerGetAm->setObjectName("DialogServerGetAm");
        DialogServerGetAm->resize(1050, 600);
        DialogServerGetAm->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        trackerButton = new QPushButton(DialogServerGetAm);
        trackerButton->setObjectName("trackerButton");
        trackerButton->setGeometry(QRect(751, 322, 101, 101));
        trackerButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        atomicBombButton = new QPushButton(DialogServerGetAm);
        atomicBombButton->setObjectName("atomicBombButton");
        atomicBombButton->setGeometry(QRect(820, 190, 101, 101));
        atomicBombButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));
        airDefanceButton = new QPushButton(DialogServerGetAm);
        airDefanceButton->setObjectName("airDefanceButton");
        airDefanceButton->setGeometry(QRect(740, 40, 101, 101));
        airDefanceButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/airDefense.png);"));
        tableWidget = new GameBoard(DialogServerGetAm);
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
        trackerCounter = new QLabel(DialogServerGetAm);
        trackerCounter->setObjectName("trackerCounter");
        trackerCounter->setGeometry(QRect(750, 401, 21, 21));
        trackerCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        trackerCounter->setAlignment(Qt::AlignCenter);
        nextButton = new QPushButton(DialogServerGetAm);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(790, 510, 221, 51));
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
        linearAttackButton = new QPushButton(DialogServerGetAm);
        linearAttackButton->setObjectName("linearAttackButton");
        linearAttackButton->setGeometry(QRect(910, 320, 101, 101));
        linearAttackButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/square attack.png);"));
        mineButton = new QPushButton(DialogServerGetAm);
        mineButton->setObjectName("mineButton");
        mineButton->setGeometry(QRect(900, 30, 111, 111));
        mineButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/mine2.png);"));
        atomicBombCounter = new QLabel(DialogServerGetAm);
        atomicBombCounter->setObjectName("atomicBombCounter");
        atomicBombCounter->setGeometry(QRect(820, 270, 21, 21));
        atomicBombCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        atomicBombCounter->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(DialogServerGetAm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(901, 30, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mineCounter = new QLabel(DialogServerGetAm);
        mineCounter->setObjectName("mineCounter");
        mineCounter->setGeometry(QRect(902, 119, 21, 21));
        mineCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        mineCounter->setAlignment(Qt::AlignCenter);
        label = new QLabel(DialogServerGetAm);
        label->setObjectName("label");
        label->setGeometry(QRect(741, 40, 41, 31));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        airDefanceCounter = new QLabel(DialogServerGetAm);
        airDefanceCounter->setObjectName("airDefanceCounter");
        airDefanceCounter->setGeometry(QRect(740, 120, 21, 21));
        airDefanceCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        airDefanceCounter->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(DialogServerGetAm);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(820, 190, 51, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(150, 0, 0);"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        linearAttackCounter = new QLabel(DialogServerGetAm);
        linearAttackCounter->setObjectName("linearAttackCounter");
        linearAttackCounter->setGeometry(QRect(910, 400, 21, 21));
        linearAttackCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        linearAttackCounter->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(DialogServerGetAm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(911, 320, 41, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(DialogServerGetAm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(751, 322, 41, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(DialogServerGetAm);

        QMetaObject::connectSlotsByName(DialogServerGetAm);
    } // setupUi

    void retranslateUi(QDialog *DialogServerGetAm)
    {
        DialogServerGetAm->setWindowTitle(QCoreApplication::translate("DialogServerGetAm", "Dialog", nullptr));
        trackerButton->setText(QString());
        atomicBombButton->setText(QString());
        airDefanceButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogServerGetAm", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogServerGetAm", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogServerGetAm", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogServerGetAm", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogServerGetAm", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogServerGetAm", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogServerGetAm", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogServerGetAm", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogServerGetAm", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogServerGetAm", "J", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        tableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        trackerCounter->setText(QCoreApplication::translate("DialogServerGetAm", "0", nullptr));
        nextButton->setText(QCoreApplication::translate("DialogServerGetAm", "Next", nullptr));
        linearAttackButton->setText(QString());
        mineButton->setText(QString());
        atomicBombCounter->setText(QCoreApplication::translate("DialogServerGetAm", "0", nullptr));
        label_2->setText(QCoreApplication::translate("DialogServerGetAm", "$5", nullptr));
        mineCounter->setText(QCoreApplication::translate("DialogServerGetAm", "0", nullptr));
        label->setText(QCoreApplication::translate("DialogServerGetAm", "$10", nullptr));
        airDefanceCounter->setText(QCoreApplication::translate("DialogServerGetAm", "0", nullptr));
        label_5->setText(QCoreApplication::translate("DialogServerGetAm", "$100", nullptr));
        linearAttackCounter->setText(QCoreApplication::translate("DialogServerGetAm", "0", nullptr));
        label_4->setText(QCoreApplication::translate("DialogServerGetAm", "$12", nullptr));
        label_3->setText(QCoreApplication::translate("DialogServerGetAm", "$15", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogServerGetAm: public Ui_DialogServerGetAm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSERVERGETAM_H
