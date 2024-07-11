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
private slots:
    void DisplayServerBoard(int** clientBoard);
private:
    Ui::DialogClientPlay *ui;
    DialogClient* socket;
    User user;
    Arms arms;
    int** ClientBoard;
};

#endif // DIALOGCLIENTPLAY_H
