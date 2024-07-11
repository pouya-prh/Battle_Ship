#include "dialogchoose.h"
#include "ui_dialogchoose.h"
#include "dialogserver.h"
#include "dialogclient.h"
DialogChoose::DialogChoose(User user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogChoose)
    ,user(user)
{
    ui->setupUi(this);


}

DialogChoose::~DialogChoose()
{
    delete ui;
}


void DialogChoose::on_ServerButton_clicked()
{
    this->close();
    DialogServer* server = new DialogServer(user,this);
    server->show();
}


void DialogChoose::on_ClientButton_clicked()
{
    this->close();
    DialogClient* client = new DialogClient(user,this);
    client->show();
}

