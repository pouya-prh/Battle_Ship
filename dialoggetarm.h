#ifndef DIALOGGETARM_H
#define DIALOGGETARM_H
#include <QTableWidget>
#include <QDialog>
#include "gameboard.h"
namespace Ui {
class DialogGetArm;
}

class DialogGetArm : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGetArm(GameBoard *gameBoard,int** cells,QWidget *parent = nullptr);
    ~DialogGetArm();

private:
    Ui::DialogGetArm *ui;
    GameBoard *gameBoard;
};

#endif // DIALOGGETARM_H
