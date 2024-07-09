#include "dialogpage1.h"
#include "ui_dialogpage1.h"
#include <dialogsetgameboard.h>
#include "dialoggetarm.h"
#include <windows.h>
#include <QTimer>
DialogPage1::DialogPage1(User& user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogPage1)
{
    this->user = user;
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
            ui->username_lable->setText("Captain "+user.GetUsername());
            ui->level_label->setText("Level: " + QString::number(user.GetLevel()));
            ui->point_label->setText("point: "+QString::number(user.GetPoint()));
            ui->drop_label->setText("drop: "+QString::number(user.GetDrop()));

        }
    });


    timer->start(20);




}

DialogPage1::~DialogPage1()
{
    delete ui;
}


void DialogPage1::on_BotPushbutton_clicked()
{
    DialogGetArm* setPage = new DialogGetArm(user);
    this->close();
    setPage->show();

}


void DialogPage1::on_WifiPushbutton_clicked()
{

}


void DialogPage1::on_FriendPushbutton_clicked()
{
    this->close();
    DialogGetArm* getArm = new DialogGetArm(user,3);
    getArm->show();
}

