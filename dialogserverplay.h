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
};

#endif // DIALOGSERVERPLAY_H
