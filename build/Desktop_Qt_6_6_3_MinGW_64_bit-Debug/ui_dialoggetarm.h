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
#include <QtWidgets/QPushButton>
#include <gameboard.h>

QT_BEGIN_NAMESPACE

class Ui_DialogGetArm
{
public:
    GameBoard *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

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
        pushButton = new QPushButton(DialogGetArm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(840, 75, 101, 101));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/mine2.png);"));
        pushButton_2 = new QPushButton(DialogGetArm);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(840, 328, 101, 101));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/lineattac.png);"));
        pushButton_3 = new QPushButton(DialogGetArm);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(840, 201, 101, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/square attack.png);"));
        pushButton_4 = new QPushButton(DialogGetArm);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(698, 76, 101, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/triple.png);"));
        pushButton_5 = new QPushButton(DialogGetArm);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(700, 202, 101, 101));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/tracker.png);"));
        pushButton_6 = new QPushButton(DialogGetArm);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(700, 328, 101, 101));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/Recommended Source Files/Recommended Source Files/Images/atomic bomb.png);"));

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
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogGetArm: public Ui_DialogGetArm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGETARM_H
