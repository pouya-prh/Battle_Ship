#ifndef DIALOGGETARM_H
#define DIALOGGETARM_H
#include <QTableWidget>
#include <QDialog>
#include "gameboard.h"
#include "arms.h"
namespace Ui {
class DialogGetArm;
}

class DialogGetArm : public QDialog
{
    Q_OBJECT

public:
     DialogGetArm(User&,GameBoard *gameBoard,int** cells,QWidget *parent = nullptr);
    ~DialogGetArm();

private slots:
    void on_mineButton_clicked();

    void on_airDefanceButton_clicked();

    void on_trackerButton_clicked();

    void on_linearAttackButton_clicked();

    void on_atomicBombButton_clicked();

private:
    Ui::DialogGetArm *ui;
    GameBoard *gameBoard;
    Arms arms;
    User& user;
};

#endif // DIALOGGETARM_H
