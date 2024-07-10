#include "dialogclientplay.h"
#include "ui_dialogclientplay.h"
#include "dialogclient.h"
DialogClientPlay::DialogClientPlay(User user,Arms arms,int** Client_cells,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogClientPlay)
{
    this->user = user;
    this->Client_Arms = arms;
    this->Client_Cells = Client_cells;
    ui->setupUi(this);
    DialogClient *client = new DialogClient();
    connect(ui->Client_tableWidget, &QTableWidget::cellClicked, client, &DialogClient::cellClicked);
}
DialogClientPlay::DialogClientPlay(QWidget *parent){}

DialogClientPlay::~DialogClientPlay()
{
    delete ui;
}
