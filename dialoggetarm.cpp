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
    // for(int i = 0; i <10;i++)
    // {
    //     for(int j = 0 ; j <10;j++)
    //     {
    //         if (cells[i][j] == 11||cells[i][j] ==12||cells[i][j]==13)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship1" + QString::number(1) + ".png");
    //             item->setIcon(icon);
    //             ui->tableWidget->setItem(i, j, item);
    //             cells[i][j] *=10;
    //         }
    //         else if (cells[i][j] == 21 ||cells[i][j] == 22||cells[i][j] == 23)
    //         {
    //             for(int k = 0; k<2;k++)
    //             {
    //                 QTableWidgetItem *item = new QTableWidgetItem();
    //                 QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship2" + QString::number(k+1) + ".png");
    //                 item->setIcon(icon);
    //                 ui->tableWidget->setItem(i, j+k, item);
    //                 cells[i][j+k] *= 10;
    //             }
    //         }
    //         else if (cells[i][j] == -21||cells[i][j] == -22||cells[i][j] == -23)
    //         {
    //             for(int k = 0; k<2;k++)
    //             {
    //                 QTableWidgetItem *item = new QTableWidgetItem();
    //                 QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/Vship2" + QString::number(k+1) + ".png");
    //                 item->setIcon(icon);
    //                 ui->tableWidget->setItem(i+k, j, item);
    //                 cells[i+k][j] *= (-10);
    //             }
    //         }
    //         else if (cells[i][j] == 31||cells[i][j] == 32)
    //         {
    //             for(int k = 0; k<3;k++)
    //             {
    //                 QTableWidgetItem *item = new QTableWidgetItem();
    //                 QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship3" + QString::number(k+1) + ".png");
    //                 item->setIcon(icon);
    //                 ui->tableWidget->setItem(i, j+k, item);
    //                 cells[i][j+k] *= 10;
    //             }
    //         }
    //         else if (cells[i][j] == -31||cells[i][j] == -32)
    //         {
    //             for(int k = 0; k<3;k++)
    //             {
    //                 QTableWidgetItem *item = new QTableWidgetItem();
    //                 QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/Vship3" + QString::number(k+1) + ".png");
    //                 item->setIcon(icon);
    //                 ui->tableWidget->setItem(i+k, j, item);
    //                 cells[i+k][j] *= (-10);
    //             }
    //         }
    //         else if (cells[i][j] == 41)
    //         {
    //             for(int k = 0; k<4;k++)
    //             {
    //                 QTableWidgetItem *item = new QTableWidgetItem();
    //                 QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship4" + QString::number(k+1) + ".png");
    //                 item->setIcon(icon);
    //                 ui->tableWidget->setItem(i, j+k, item);
    //                 cells[i][j+k] *= 10;
    //             }
    //         }
    //         else if (cells[i][j] == -41)
    //         {
    //             for(int k = 0; k<4;k++)
    //             {
    //                 QTableWidgetItem *item = new QTableWidgetItem();
    //                 QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/Vship4" + QString::number(k+1) + ".png");
    //                 item->setIcon(icon);
    //                 ui->tableWidget->setItem(i+k, j, item);
    //                 cells[i+k][j] *= (-10);
    //             }
    //         }
    //         else if(cells[i][j] == 5)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/RedUnavailible.jpg");
    //             item->setIcon(icon);
    //             ui->tableWidget->setItem(i,j,item);
    //         }
    //         else if (cells[i][j] == 0)
    //         {

    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             item->setText(" ");
    //             ui->tableWidget->setItem(i,j,item);
    //         }
    //     }
    // }
    // for(int i = 0; i <10;i++)
    // {
    //     for(int j = 0 ; j <10 ;j++)
    //     {
    //         if (cells[i][j] == 110)
    //             cells[i][j] =11;
    //         else if (cells[i][j]==120)
    //             cells[i][j]=12;
    //         else if(cells[i][j] == 130)
    //             cells[i][j] = 13;
    //         else if (cells[i][j] ==210)
    //             cells[i][j] = 21;
    //         else if (cells[i][j] ==220)
    //             cells[i][j] = 22;
    //         else if (cells[i][j] ==230)
    //             cells[i][j] = 23;
    //         else if(cells[i][j] == 310)
    //             cells[i][j] = 31;
    //         else if(cells[i][j] == 320)
    //             cells[i][j] = 32;
    //         else if(cells[i][j] == 410)
    //             cells[i][j] = 41;
    //     }
    // }
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

