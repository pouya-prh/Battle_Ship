#include "dialogservergetam.h"
#include "ui_dialogservergetam.h"
#include "dialogserversetgameboard.h"

DialogServerGetAm::DialogServerGetAm(User ServerUSer,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogServerGetAm)
{
    this->ServerUser = ServerUSer;
    ui->setupUi(this);
}

DialogServerGetAm::~DialogServerGetAm()
{
    delete ui;
}

void DialogServerGetAm::on_mineButton_clicked()
{
    if (ServerArms.BuyMine(ServerUser))
    {
        QString currentText = ui->mineCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->mineCounter->setText(newText);

    }


}


void DialogServerGetAm::on_airDefanceButton_clicked()
{
    if (ServerArms.BuyAirDefance(ServerUser))
    {
        QString currentText = ui->airDefanceCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->airDefanceCounter->setText(newText);
    }

}


void DialogServerGetAm::on_trackerButton_clicked()
{
    if (ServerArms.BuyTracker(ServerUser))
    {
        QString currentText = ui->trackerCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->trackerCounter->setText(newText);
    }
}


void DialogServerGetAm::on_linearAttackButton_clicked()
{
    if (ServerArms.BuyLinearAttack(ServerUser))
    {
        QString currentText = ui->linearAttackCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->linearAttackCounter->setText(newText);
    }
}



void DialogServerGetAm::on_atomicBombButton_clicked()
{
    if (ServerArms.BuyAtomicBomb(ServerUser))
    {
        QString currentText = ui->atomicBombCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->atomicBombCounter->setText(newText);
    }
}


void DialogServerGetAm::on_nextButton_clicked()
{
    this->close();
    emit ArmsSet();
}

Arms DialogServerGetAm::returnArms()
{
    return ServerArms;
}

