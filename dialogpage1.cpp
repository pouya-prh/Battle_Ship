#include "dialogpage1.h"
#include "ui_dialogpage1.h"
#include <dialogsetgameboard.h>
#include <windows.h>
#include <QTimer>
DialogPage1::DialogPage1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogPage1)
{
    ui->setupUi(this);
    ui->textEdit->hide();
    ui->WifiPushbutton->hide();
    ui->BotPushbutton->hide();
    ui->FriendPushbutton->hide();
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]() {
         static int progress = 0;
        ui->progressBar->setValue(progress++);
        if (progress > 100) {
            timer->stop();
            delete timer;

            ui->progressBar->hide();
            ui->textEdit->setText("                  Wellcome");
            ui->textEdit->show();
            ui->WifiPushbutton->show();
            ui->BotPushbutton->show();
            ui->FriendPushbutton->show();

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

