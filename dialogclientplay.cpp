#include "dialogclientplay.h"
#include "ui_dialogclientplay.h"

DialogClientPlay::DialogClientPlay(DialogClient* socket,User user,Arms arms,int** ClientBoard,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogClientPlay)
    ,socket(socket),
    user(user),
    arms(arms),
    ClientBoard(ClientBoard)
{
    ui->setupUi(this);
}

DialogClientPlay::~DialogClientPlay()
{
    delete ui;
}
