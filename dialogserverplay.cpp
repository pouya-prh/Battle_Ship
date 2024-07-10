#include "dialogserverplay.h"
#include "ui_dialogserverplay.h"
#include "dialogserver.h"
DialogServerPlay::DialogServerPlay(User user,Arms arms,int** ServerBoard,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogServerPlay)
{
    ui->setupUi(this);
    this->ServerBoard = ServerBoard;
    this->user = user;
    this->arms = arms;
    DialogServer *server = new DialogServer();
    connect(ui->Server_tableWidget, &QTableWidget::cellClicked, server, &DialogServer::cellClicked);
}

DialogServerPlay::~DialogServerPlay()
{
    delete ui;
}
