#include "dialoggameai.h"
#include "ui_dialoggameai.h"

DialogGameAI::DialogGameAI(int** cells,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogGameAI)
{
    ui->setupUi(this);

    for(int i = 0; i <10;i++)
    {
        for(int j = 0 ; j <10;j++)
        {
            if (cells[i][j] == 11||cells[i][j] ==12||cells[i][j]==13)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship11.PNG");
                item->setIcon(icon);

                ui->tableWidget->setItem(i, j, item);
                cells[i][j] *=10;
            }
            else if (cells[i][j] == 21 ||cells[i][j] == 22||cells[i][j] == 23)
            {
                for(int k = 0; k<2;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship2" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k, item);
                    cells[i][j+k] *= 10;
                }
            }
            else if (cells[i][j] == -21||cells[i][j] == -22||cells[i][j] == -23)
            {
                for(int k = 0; k<2;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship2" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i+k, j, item);
                    cells[i+k][j] *= (-10);
                }
            }
            else if (cells[i][j] == 31||cells[i][j] == 32)
            {
                for(int k = 0; k<3;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship3" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k, item);
                    cells[i][j+k] *= 10;
                }
            }
            else if (cells[i][j] == -31||cells[i][j] == -32)
            {
                for(int k = 0; k<3;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship3" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i+k, j, item);
                    cells[i+k][j] *= (-10);
                }
            }
            else if (cells[i][j] == 41)
            {
                for(int k = 0; k<4;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship4" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k, item);
                    cells[i][j+k] *= 10;
                }
            }
            else if (cells[i][j] == -41)
            {
                for(int k = 0; k<4;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship4" + QString::number(k+1) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i+k, j, item);
                    cells[i+k][j] *= (-10);
                }
            }
            else if(cells[i][j] == 7)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/mine2.png");
                item->setIcon(icon);
                ui->tableWidget->setItem(i, j, item);
            }
            else if(cells[i][j] == 8)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/airDefense.png");
                item->setIcon(icon);
                ui->tableWidget->setItem(i, j, item);
            }
        }
    }
    for(int i = 0; i <10;i++)
    {
        for(int j = 0 ; j <10 ;j++)
        {
            if (cells[i][j] == 110)
                cells[i][j] =11;
            else if (cells[i][j]==120)
                cells[i][j]=12;
            else if(cells[i][j] == 130)
                cells[i][j] = 13;
            else if (cells[i][j] ==210)
                cells[i][j] = 21;
            else if (cells[i][j] ==220)
                cells[i][j] = 22;
            else if (cells[i][j] ==230)
                cells[i][j] = 23;
            else if(cells[i][j] == 310)
                cells[i][j] = 31;
            else if(cells[i][j] == 320)
                cells[i][j] = 32;
            else if(cells[i][j] == 410)
                cells[i][j] = 41;
        }
    }


}

DialogGameAI::~DialogGameAI()
{
    delete ui;
}
