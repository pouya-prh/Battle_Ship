#ifndef DIALOGGAMEAI_H
#define DIALOGGAMEAI_H
#include "arms.h"
#include <QDialog>
#include "user.h"
#include <QTimer>
namespace Ui {
class DialogGameAI;
}

class DialogGameAI : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGameAI(User&,Arms&,int**,QWidget *parent = nullptr);
    ~DialogGameAI();
    int** makeGameBoard();
    void Display(int** cells);
    void userPlay(int,int,int);
    void botPlay();
    void play(int,int,int);

private slots:
    void on_linearAttackbutton_clicked();

    void on_atomicBombButton_clicked();

    void on_trackerButton_clicked();

    void on_botTableWidget_cellClicked(int row, int column);

private:
    Ui::DialogGameAI *ui;
    QTimer* timer;
    int** botGameBoard;
    int** Cells;
    bool turn;
    bool botTurn;
    User& user;
    Arms& arms;
    int botDestroyedShip21;
    int botDestroyedShip22;
    int botDestroyedShip23;
    int botDestroyedShip31;
    int botDestroyedShip32;
    int botDestroyedShip4;
};

#endif // DIALOGGAMEAI_H
