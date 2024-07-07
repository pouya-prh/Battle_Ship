#include "dialoggameai.h"
#include "ui_dialoggameai.h"
#include <stdlib.h>
DialogGameAI::DialogGameAI(User& user,Arms& arms,int** cells,QWidget *parent)
    : QDialog(parent)
    ,user(user),
    arms(arms),
    ui(new Ui::DialogGameAI)

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
    botGameBoard = makeGameBoard();
    for(int i = 0; i <10;i++)
    {
        for(int j = 0 ; j <10;j++)
        {
            if (botGameBoard[i][j] == 11||botGameBoard[i][j] ==12||botGameBoard[i][j]==13)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                item->setText("1");

                ui->botTableWidget->setItem(i, j, item);
                botGameBoard[i][j] *=10;
            }
            else if (botGameBoard[i][j] == 21 ||botGameBoard[i][j] == 22||botGameBoard[i][j] == 23)
            {
                for(int k = 0; k<2;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    item->setText("2");

                    ui->botTableWidget->setItem(i, j+k, item);
                    botGameBoard[i][j+k] *= 10;
                }
            }
            else if (botGameBoard[i][j] == 31||botGameBoard[i][j] == 32)
            {
                for(int k = 0; k<3;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    item->setText("3");

                    ui->botTableWidget->setItem(i, j+k, item);
                    botGameBoard[i][j+k] *= 10;
                }
            }
            else if (botGameBoard[i][j] == 41)
            {
                for(int k = 0; k<4;k++)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    item->setText("4");

                    ui->botTableWidget->setItem(i, j+k, item);
                    botGameBoard[i][j+k] *= 10;
                }
            }
            else if(botGameBoard[i][j] == 7)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/mine2.png");
                item->setIcon(icon);
                ui->botTableWidget->setItem(i, j, item);
            }
            else if(botGameBoard[i][j] == 8)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/airDefense.png");
                item->setIcon(icon);
                ui->botTableWidget->setItem(i, j, item);
            }
        }
    }



}

DialogGameAI::~DialogGameAI()
{
    delete ui;
}

int** DialogGameAI::makeGameBoard()
{
    int** gameBoard = new int*[10];

    for (int i = 0; i < 10; ++i) {
        gameBoard[i] = new int[10];
        for (int j = 0; j < 10; ++j) {
            gameBoard[i][j] = 0;
        }
    }
    std::srand(std::time(NULL));

    int a = std::rand() % 2 + 1;
    if (a == 1)
    {
       gameBoard[0][1] = 11;
       gameBoard[0][6] = 23;
       gameBoard[0][7] = 23;
       gameBoard[2][1] = 21;
       gameBoard[2][2] = 21;
       gameBoard[1][9] = 8;
       gameBoard[3][4] = 22;
       gameBoard[3][5] = 22;
       gameBoard[4][0] = 32;
       gameBoard[4][1] = 32;
       gameBoard[4][2] = 32;
       gameBoard[6][1] = 31;
       gameBoard[6][2] = 31;
       gameBoard[6][3] = 31;
       gameBoard[6][5] = 41;
       gameBoard[6][6] = 41;
       gameBoard[6][7] = 41;
       gameBoard[6][8] = 41;
       gameBoard[6][9] = 8;
       gameBoard[7][4] = 7;
       gameBoard[8][2] = 12;
       gameBoard[8][6] = 13;
       gameBoard[9][0] = 7;
    }
    else
    {
        gameBoard[0][0] = 11;
        gameBoard[0][9] = 12;
        gameBoard[1][5] = 23;
        gameBoard[1][6] = 23;
        gameBoard[2][2] = 21;
        gameBoard[2][3] = 21;
        gameBoard[3][7] = 22;
        gameBoard[3][8] = 22;
        gameBoard[4][2] = 7;
        gameBoard[4][9] = 8;
        gameBoard[5][6] = 31;
        gameBoard[5][7] = 31;
        gameBoard[5][8] = 31;
        gameBoard[7][2] = 32;
        gameBoard[7][3] = 32;
        gameBoard[7][4] = 33;
        gameBoard[7][9] = 8;
        gameBoard[9][2] = 41;
        gameBoard[9][3] = 41;
        gameBoard[9][4] = 41;
        gameBoard[9][5] = 41;
        gameBoard[9][7] = 7;
        gameBoard[9][9] = 13;
    }
    return gameBoard;
}







