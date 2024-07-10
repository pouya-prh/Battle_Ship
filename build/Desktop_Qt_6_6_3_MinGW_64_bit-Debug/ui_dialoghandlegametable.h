/********************************************************************************
** Form generated from reading UI file 'dialoghandlegametable.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHANDLEGAMETABLE_H
#define UI_DIALOGHANDLEGAMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogHandleGameTable
{
public:

    void setupUi(QDialog *DialogHandleGameTable)
    {
        if (DialogHandleGameTable->objectName().isEmpty())
            DialogHandleGameTable->setObjectName("DialogHandleGameTable");
        DialogHandleGameTable->resize(400, 300);

        retranslateUi(DialogHandleGameTable);

        QMetaObject::connectSlotsByName(DialogHandleGameTable);
    } // setupUi

    void retranslateUi(QDialog *DialogHandleGameTable)
    {
        DialogHandleGameTable->setWindowTitle(QCoreApplication::translate("DialogHandleGameTable", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogHandleGameTable: public Ui_DialogHandleGameTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHANDLEGAMETABLE_H
