#include "dialogserverorclient.h"
#include "ui_dialogserverorclient.h"

DialogServerOrClient::DialogServerOrClient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogServerOrClient)
{
    ui->setupUi(this);
}

DialogServerOrClient::~DialogServerOrClient()
{
    delete ui;
}
