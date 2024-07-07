#include "dialoggetarm.h"
#include "ui_dialoggetarm.h"
#include "dialogsetgameboard.h"
DialogGetArm::DialogGetArm(User& user,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGetArm),
    user(user)
{

    int drop =user.GetDrop();
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
    DialogSetGameBoard *setPage = new DialogSetGameBoard(user,arms);
    setPage->show();



}

