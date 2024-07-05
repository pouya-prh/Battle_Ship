#include "dialogpage1.h"
#include "ui_dialogpage1.h"
#include <dialogsetgameboard.h>
#include <windows.h>
#include <QTimer>
DialogPage1::DialogPage1(QString username,int point,int level,int drop,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogPage1)
{
    ui->setupUi(this);
    ui->wellcome_lable->hide();
    ui->WifiPushbutton->hide();
    ui->BotPushbutton->hide();
    ui->FriendPushbutton->hide();
    ui->widget->hide();
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]() {
         static int progress = 0;
        ui->progressBar->setValue(progress++);
        if (progress > 100) {
            timer->stop();
            delete timer;

            ui->progressBar->hide();
            ui->wellcome_lable->setText("Wellcome");
            ui->wellcome_lable->show();
            ui->WifiPushbutton->show();
            ui->BotPushbutton->show();
            ui->FriendPushbutton->show();
            ui->widget->show();
            ui->username_lable->setText("Captain "+username);
            ui->level_label->setText("Level: "+QString::number(level));
            ui->point_label->setText("point: "+QString::number(point));
            ui->drop_label->setText("drop: "+QString::number(drop));

        }
    });


    timer->start(25);




}

DialogPage1::~DialogPage1()
{
    delete ui;
}


void DialogPage1::on_BotPushbutton_clicked()
{
    DialogSetGameBoard* setPage = new DialogSetGameBoard();
    this->close();
    setPage->show();

}

