#ifndef DIALOGSERVERPLAY_H
#define DIALOGSERVERPLAY_H
#include "dialogserver.h"
#include <QDialog>
#include "user.h"
#include "arms.h"

namespace Ui {
class DialogServerPlay;
}

class DialogServerPlay : public QDialog
{
    Q_OBJECT

public:
    explicit DialogServerPlay(DialogServer*,User,Arms,int**,QWidget *parent = nullptr);
    ~DialogServerPlay();
    void DisplayServerBoard();
    void makeEmptyAround(int** cells,int value);
    void WonOrLost();

private slots:
    void DisplayClientBoard(int** clientBoard);
    void AttackToClient(int,int);
    void AttackToServer(int,int);
private:
    Ui::DialogServerPlay *ui;
    DialogServer* Server;
    User user;
    Arms arms;
    int** ServerBoard;
    int** ClientBoard;
    bool turn;
    int ClientShip11;
    int ClientShip12;
    int ClientShip13;
    int ClientShip21;
    int ClientShip22;
    int ClientShip23;
    int ClientShip31;
    int ClientShip32;
    int ClientShip41;
    int ServerShip11;
    int ServerShip12;
    int ServerShip13;
    int ServerShip21;
    int ServerShip22;
    int ServerShip23;
    int ServerShip31;
    int ServerShip32;
    int ServerShip41;
};

#endif // DIALOGSERVERPLAY_H
