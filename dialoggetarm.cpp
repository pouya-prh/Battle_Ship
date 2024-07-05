#include "dialoggetarm.h"
#include "ui_dialoggetarm.h"
#include <QVBoxLayout>
#include "gameboard.h"
DialogGetArm::DialogGetArm(GameBoard *gameBoard,int** cells,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGetArm),
    gameBoard(gameBoard)
{
    ui->setupUi(this);
    // QVBoxLayout *layout = new QVBoxLayout();
    // layout->addWidget(gameBoard);
    // setLayout(layout);
    for(int i = 0; i <10;i++)
    {
        for(int j = 0 ; j <10 ;j++)
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
                for(int k = 1; k<=2;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship2" + QString::number(k) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k-1, item);
                    cells[i][j+k-1] = 20;
                }
            }
            else if (cells[i][j] == 3)
            {
                for(int k = 1; k<=3;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship3" + QString::number(k) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k-1, item);
                    cells[i][j+k-1] = 30;
                }
            }
            else if (cells[i][j] == 4)
            {
                for(int k = 1; k<=4;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/ship4" + QString::number(k) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j+k-1, item);
                    cells[i][j+k-1] = 40;
                }
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
