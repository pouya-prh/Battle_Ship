#ifndef DIALOGCLIENTPLAY_H
#define DIALOGCLIENTPLAY_H
#include "user.h"
#include "arms.h"
#include "dialogclient.h"
#include <QDialog>

namespace Ui {
class DialogClientPlay;
}

class DialogClientPlay : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClientPlay(DialogClient*,User,Arms,int**,QWidget *parent = nullptr);
    ~DialogClientPlay();
    void DisplayClientBoard();
    void makeEmptyAround(int** cells,int value);
private slots:
    void DisplayServerBoard(int** clientBoard);
    void AttackToClient(int,int);
    void AttackToServer(int,int);

private:
    Ui::DialogClientPlay *ui;
    DialogClient* socket;
    User user;
    Arms arms;
    int** ClientBoard;
    int** ServerBoard;
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

#endif // DIALOGCLIENTPLAY_H
