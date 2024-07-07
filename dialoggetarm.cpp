#include "dialoggetarm.h"
#include "ui_dialoggetarm.h"
#include "gameboard.h"
DialogGetArm::DialogGetArm(User& user,GameBoard *gameBoard,int** cells,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGetArm),
    gameBoard(gameBoard),
    user(user)
{

    int drop =user.GetDrop();
    drop +=30;
    user.SetDrop(drop);
    ui->setupUi(this);
    for(int i = 0; i <10;i++)
    {
        for(int j = 0 ; j <10;j++)
        {
            if (cells[i][j] == 1)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship1" + QString::number(1) + ".png");
                item->setIcon(icon);
                ui->tableWidget->setItem(i, j, item);
                cells[i][j] = 10;
            }
            else if (cells[i][j] == 2)
            {
                for(int k = 0; k<2;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship2" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k, item);
                    cells[i][j+k] = 20;
                }
            }
            else if (cells[i][j] == -2)
            {
                for(int k = 0; k<2;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/Vship2" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i+k, j, item);
                    cells[i+k][j] = 20;
                }
            }
            else if (cells[i][j] == 3)
            {
                for(int k = 0; k<3;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship3" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k, item);
                    cells[i][j+k] = 30;
                }
            }
            else if (cells[i][j] == -3)
            {
                for(int k = 0; k<3;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/Vship3" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i+k, j, item);
                    cells[i+k][j] = 30;
                }
            }
            else if (cells[i][j] == 4)
            {
                for(int k = 0; k<4;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship4" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k, item);
                    cells[i][j+k] = 40;
                }
            }
            else if (cells[i][j] == -4)
            {
                for(int k = 0; k<4;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/Vship4" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i+k, j, item);
                    cells[i+k][j] = 40;
                }
            }
            else if(cells[i][j] == 5)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/RedUnavailible.jpg");
                item->setIcon(icon);
                ui->tableWidget->setItem(i,j,item);
            }
            else if (cells[i][j] == 0)
            {

                QTableWidgetItem *item = new QTableWidgetItem();
                item->setText(" ");
                ui->tableWidget->setItem(i,j,item);
            }
        }
    }
    for(int i = 0; i <10;i++)
    {
        for(int j = 0 ; j <10 ;j++)
        {
            if (cells[i][j] == 10)
                cells[i][j] =1;
            else if (cells[i][j] ==20)
                cells[i][j] = 2;
            else if(cells[i][j] == 30)
                cells[i][j] = 3;
            else if(cells[i][j] == 40)
                cells[i][j] = 4;
        }
    }
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

