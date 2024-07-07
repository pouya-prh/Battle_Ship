#ifndef DIALOGGETARM_H
#define DIALOGGETARM_H
#include <QTableWidget>
#include <QDialog>

#include "arms.h"
namespace Ui {
class DialogGetArm;
}

class DialogGetArm : public QDialog
{
    Q_OBJECT

public:
     DialogGetArm(User&,QWidget *parent = nullptr);
    ~DialogGetArm();

private slots:
    void on_mineButton_clicked();

    void on_airDefanceButton_clicked();

    void on_trackerButton_clicked();

    void on_linearAttackButton_clicked();

    void on_atomicBombButton_clicked();

    void on_nextButton_clicked();

private:
    Ui::DialogGetArm *ui;
    Arms arms;
    User& user;
};

#endif // DIALOGGETARM_H
