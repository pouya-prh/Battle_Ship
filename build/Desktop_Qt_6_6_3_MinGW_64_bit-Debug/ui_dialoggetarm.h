/********************************************************************************
** Form generated from reading UI file 'dialoggetarm.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGETARM_H
#define UI_DIALOGGETARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <gameboard.h>

QT_BEGIN_NAMESPACE

class Ui_DialogGetArm
{
public:
    GameBoard *tableWidget;
    QPushButton *mineButton;
    QPushButton *linearAttackButton;
    QPushButton *airDefanceButton;
    QPushButton *trackerButton;
    QPushButton *atomicBombButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *airDefanceCounter;
    QLabel *mineCounter;
    QLabel *trackerCounter;
    QLabel *linearAttackCounter;
    QLabel *atomicBombCounter;
    QPushButton *nextButton;

    void setupUi(QDialog *DialogGetArm)
    {
        if (DialogGetArm->objectName().isEmpty())
            DialogGetArm->setObjectName("DialogGetArm");
        DialogGetArm->resize(994, 602);
        DialogGetArm->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/Back.jpg);"));
        tableWidget = new GameBoard(DialogGetArm);
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
        mineButton = new QPushButton(DialogGetArm);
        mineButton->setObjectName("mineButton");
        mineButton->setGeometry(QRect(830, 65, 111, 111));
        mineButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/mine2.png);"));
        linearAttackButton = new QPushButton(DialogGetArm);
        linearAttackButton->setObjectName("linearAttackButton");
        linearAttackButton->setGeometry(QRect(842, 348, 101, 101));
        linearAttackButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/square attack.png);"));
        airDefanceButton = new QPushButton(DialogGetArm);
        airDefanceButton->setObjectName("airDefanceButton");
        airDefanceButton->setGeometry(QRect(638, 76, 101, 101));
        airDefanceButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/airDefense.png);"));
        trackerButton = new QPushButton(DialogGetArm);
        trackerButton->setObjectName("trackerButton");
        trackerButton->setGeometry(QRect(640, 350, 101, 101));
        trackerButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        atomicBombButton = new QPushButton(DialogGetArm);
        atomicBombButton->setObjectName("atomicBombButton");
        atomicBombButton->setGeometry(QRect(740, 210, 101, 101));
        atomicBombButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));
        label = new QLabel(DialogGetArm);
        label->setObjectName("label");
        label->setGeometry(QRect(640, 40, 41, 31));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(DialogGetArm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(829, 39, 41, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(DialogGetArm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(637, 317, 41, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(DialogGetArm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(843, 319, 41, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(0, 150, 0);"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(DialogGetArm);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(740, 182, 51, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(150, 0, 0);"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        airDefanceCounter = new QLabel(DialogGetArm);
        airDefanceCounter->setObjectName("airDefanceCounter");
        airDefanceCounter->setGeometry(QRect(640, 155, 21, 21));
        airDefanceCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        airDefanceCounter->setAlignment(Qt::AlignCenter);
        mineCounter = new QLabel(DialogGetArm);
        mineCounter->setObjectName("mineCounter");
        mineCounter->setGeometry(QRect(835, 154, 21, 21));
        mineCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        mineCounter->setAlignment(Qt::AlignCenter);
        trackerCounter = new QLabel(DialogGetArm);
        trackerCounter->setObjectName("trackerCounter");
        trackerCounter->setGeometry(QRect(640, 430, 21, 21));
        trackerCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        trackerCounter->setAlignment(Qt::AlignCenter);
        linearAttackCounter = new QLabel(DialogGetArm);
        linearAttackCounter->setObjectName("linearAttackCounter");
        linearAttackCounter->setGeometry(QRect(843, 425, 21, 21));
        linearAttackCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        linearAttackCounter->setAlignment(Qt::AlignCenter);
        atomicBombCounter = new QLabel(DialogGetArm);
        atomicBombCounter->setObjectName("atomicBombCounter");
        atomicBombCounter->setGeometry(QRect(742, 288, 21, 21));
        atomicBombCounter->setStyleSheet(QString::fromUtf8("background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);\n"
"font: 10pt \"BYRIL_Sea_Battle2\";\n"
"color: rgb(85, 85, 85);"));
        atomicBombCounter->setAlignment(Qt::AlignCenter);
        nextButton = new QPushButton(DialogGetArm);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(730, 520, 221, 51));
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

        retranslateUi(DialogGetArm);

        QMetaObject::connectSlotsByName(DialogGetArm);
    } // setupUi

    void retranslateUi(QDialog *DialogGetArm)
    {
        DialogGetArm->setWindowTitle(QCoreApplication::translate("DialogGetArm", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogGetArm", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogGetArm", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogGetArm", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogGetArm", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogGetArm", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogGetArm", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogGetArm", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogGetArm", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogGetArm", "I", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogGetArm", "J", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        tableWidget->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        mineButton->setText(QString());
        linearAttackButton->setText(QString());
        airDefanceButton->setText(QString());
        trackerButton->setText(QString());
        atomicBombButton->setText(QString());
        label->setText(QCoreApplication::translate("DialogGetArm", "$10", nullptr));
        label_2->setText(QCoreApplication::translate("DialogGetArm", "$5", nullptr));
        label_3->setText(QCoreApplication::translate("DialogGetArm", "$15", nullptr));
        label_4->setText(QCoreApplication::translate("DialogGetArm", "$12", nullptr));
        label_5->setText(QCoreApplication::translate("DialogGetArm", "$100", nullptr));
        airDefanceCounter->setText(QCoreApplication::translate("DialogGetArm", "0", nullptr));
        mineCounter->setText(QCoreApplication::translate("DialogGetArm", "0", nullptr));
        trackerCounter->setText(QCoreApplication::translate("DialogGetArm", "0", nullptr));
        linearAttackCounter->setText(QCoreApplication::translate("DialogGetArm", "0", nullptr));
        atomicBombCounter->setText(QCoreApplication::translate("DialogGetArm", "0", nullptr));
        nextButton->setText(QCoreApplication::translate("DialogGetArm", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogGetArm: public Ui_DialogGetArm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGETARM_H
