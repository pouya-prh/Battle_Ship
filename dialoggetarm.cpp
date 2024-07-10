#include "dialoggetarm.h"
#include "ui_dialoggetarm.h"
#include "dialogsetgameboard.h"

DialogGetArm::DialogGetArm(User user,int which,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGetArm)
{
    this->which = which;
    if (which == 1||which == 21||which == 22) //21->server  22->client
    {
        this->user = user;
    }
    else if ( which == 3)
    {
        this->user.SetUsername("player1");
        this->user.SetDrop(500);
        this->user.SetLevel(5);
        this->user.SetPoint(0);
    }
    else if (which == 32)
    {
        this->user.SetUsername("player2");
        this->user.SetDrop(500);
        this->user.SetLevel(5);
        this->user.SetPoint(0);
    }
    int drop =this->user.GetDrop();
    drop +=30;
    user.SetDrop(drop);
    ui->setupUi(this);
}

DialogGetArm::~DialogGetArm()
{
    delete ui;
}

void DialogGetArm::on_mineButton_clicked()
{
    if (arms.BuyMine(this->user))
    {
        QString currentText = ui->mineCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->mineCounter->setText(newText);

    }


}


void DialogGetArm::on_airDefanceButton_clicked()
{
    if (arms.BuyAirDefance(this->user))
    {
        QString currentText = ui->airDefanceCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->airDefanceCounter->setText(newText);
    }

}


void DialogGetArm::on_trackerButton_clicked()
{
    if (arms.BuyTracker(this->user))
    {
        QString currentText = ui->trackerCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->trackerCounter->setText(newText);
    }
}


void DialogGetArm::on_linearAttackButton_clicked()
{
    if (arms.BuyLinearAttack(this->user))
    {
        QString currentText = ui->linearAttackCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->linearAttackCounter->setText(newText);
    }
}



void DialogGetArm::on_atomicBombButton_clicked()
{
    if (arms.BuyAtomicBomb(this->user))
    {
        QString currentText = ui->atomicBombCounter->text();
        int currentValue = currentText.toInt();
        int value = currentValue +1;
        QString newText = QString::number(value);
        ui->atomicBombCounter->setText(newText);
    }
}


void DialogGetArm::on_nextButton_clicked()
{
    this->close();
    DialogSetGameBoard *setPage = new DialogSetGameBoard(user,arms,which);
    setPage->show();



}

