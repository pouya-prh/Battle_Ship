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
    void userPlay(int,int,int arm = 0);
    void botPlay();
    void play(int,int,int);
    void makeEmptyAround(int**,int);
    void Attack(int**,int,int);
    void Animation(int,int,int);
    void dragEnterEvent(QDragEnterEvent *event)override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void shipFind(int,int);
    void AtomicBomb(int,int);
    void WonOrLost();

private slots:
    void on_linearAttackbutton_clicked();

    void on_atomicBombButton_clicked();

    void on_trackerButton_clicked();


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
    int Drop;
};

#endif // DIALOGGAMEAI_H
