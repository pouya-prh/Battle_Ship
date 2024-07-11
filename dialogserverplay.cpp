#include "dialogserverplay.h"
#include "ui_dialogserverplay.h"

DialogServerPlay::DialogServerPlay(DialogServer* server,User user,Arms arms,int** ServerBoard,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogServerPlay)
    ,Server(server)
    ,arms(arms)
{
    this->user = user;
   // this->arms = arms;
    this->ServerBoard = ServerBoard;
    ui->setupUi(this);
    setAcceptDrops(true);
    ui->trackerButton2->hide();
    ui->planeLabel->hide();
    ui->atomicZone->hide();
    ui->linearAttackCounter->setText(QString::number(arms.getLineAttackerCount()));
    ui->atomicBombCounter->setText(QString::number(arms.getAtomicBombCount()));
    ui->trackerCounter->setText(QString::number(arms.getTrackerCount()));

}

DialogServerPlay::~DialogServerPlay()
{
    delete ui;
}
