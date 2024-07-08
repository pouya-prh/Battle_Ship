#include "dialoggameai.h"
#include "ui_dialoggameai.h"
#include <stdlib.h>

DialogGameAI::DialogGameAI(User& user,Arms& arms,int** cells,QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::DialogGameAI),
    user(user),
    arms(arms)

{
    ui->setupUi(this);
    this->cells = cells;

    ui->linearAttackCounter->setText(QString::number(arms.getLineAttackerCount()));
    ui->atomicBombCounter->setText(QString::number(arms.getAtomicBombCount()));
    ui->trackerCounter->setText(QString::number(arms.getTrackerCount()));

    botDestroyedShip21 = 0;
    botDestroyedShip22 = 0;
    botDestroyedShip23 = 0;
    botDestroyedShip31 = 0;
    botDestroyedShip32 = 0;
    botDestroyedShip4 = 0;

    Display(cells);
    botGameBoard = makeGameBoard();
    while(true)
    {
        if(turn)
        {

        }
        else
        {
            botPlay();
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


void DialogGameAI::on_linearAttackbutton_clicked()
{
    if (arms.getLineAttackerCount()>0&&turn)
    {
        arms.linearAttackMinus();
        ui->linearAttackCounter->setText(QString::number(arms.getLineAttackerCount()));
        userPlay(1);
    }
}


void DialogGameAI::on_atomicBombButton_clicked()
{
    if (arms.getAtomicBombCount()>0&&turn)
    {
        arms.atomicBombMinus();
        ui->atomicBombCounter->setText(QString::number(arms.getAtomicBombCount()));
        userPlay(2);
    }
}



void DialogGameAI::on_trackerButton_clicked()
{
    if (arms.getTrackerCount()>0&&turn)
    {
        arms.trackerMinus();
        ui->atomicBombCounter->setText(QString::number(arms.getTrackerCount()));
        userPlay(3);
    }
}

void DialogGameAI::Display(int** cells)
{
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
            else if(cells[i][j] == -11)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/emptyCell.png");
                item->setIcon(icon);
                ui->tableWidget->setItem(i, j, item);
            }
            else if (cells[i][j] == -210||cells[i][j] == -220||cells[i][j] == -230)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                ui->tableWidget->setItem(i, j, item);
            }
            else if(cells[i][j]==-310||cells[i][j] == -320)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                ui->tableWidget->setItem(i, j, item);
            }
            else if (cells[i][j] == -410)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
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

void DialogGameAI::botPlay()
{
    int** cells2 = botGameBoard;
    while (!turn){
        int i = rand() % 9 + 1;
        int j = rand() % 9 + 1;

        if (cells[i][j] == 0 ){
            cells[i][j] = -11 ;
            turn = false ;
            return;
        }

        else if ( cells[i][j] == 1 ) {
            cells[i][j] = -10 ;

            cells[i-1][j] = -11 ;
            cells[i-1][j-1] = -11 ;
            cells[i][j-1] = -11 ;
            cells[i+1][j] = -11 ;
            cells[i+1][j+1] = -11 ;
            cells[i][j+1] = -11 ;
            cells[i+1][j-1] = -11 ;
            cells[i-1][j+1] = -11 ;
        }


        else if ( cells[i][j] == 21 ){
            cells[i][j] = -210 ;
              botDestroyedShip21++ ;
            if ( botDestroyedShip21 == 2 ){

                for ( int x = 0 ; x <= 9 ; x++ ){
                    for ( int y = 0 ; y<= 9 ; y++ ) {

                        if ( cells[x][y] == -210 ){

                            if ( cells[x-1][y] == 0 || cells[x-1][y] == 7  ){
                                cells[x-1][y] = -11 ;
                            }
                            if ( cells[x-1][y-1] ==0 || cells[x-1][y-1] == 7 ){
                                cells[x-1][y-1] = -11 ;
                            }
                            if ( cells[x][y-1] ==0 || cells[x][y-1] == 7 ){
                                cells[x][y-1] = -11 ;
                            }
                            if ( cells[x+1][y] == 0 ||cells[x+1][y] == 7 ){
                                cells[x+1][y] = -11 ;
                            }
                            if ( cells[x+1][y+1] == 0 ||cells[x+1][y+1] == 7 ){
                                cells[x+1][y+1] = -11 ;
                            }
                            if ( cells[x][y+1] == 0 ||cells[x][y+1] == 7 ){
                                cells[x][y+1] = -11 ;
                            }
                            if (cells[x+1][y-1] == 0 || cells[x+1][y-1] == 7 ){
                                cells[x+1][y-1] = -11 ;
                            }
                            if ( cells[x-1][y+1] == 0 || cells[x-1][y+1] == 7 ) {
                                cells[x-1][y+1] = -11 ;
                            }

                        }
                    }
                }
            }
        }

        else if ( cells[i][j] == 22 ){
            cells[i][j] = -220 ;
            botDestroyedShip22++ ;
            if ( botDestroyedShip22 == 2 ){

                for ( int x = 0 ; x <= 9 ; x++ ){
                    for ( int y = 0 ; y<= 9 ; y++ ) {

                        if ( cells[x][y] == -220 ){

                            if ( cells[x-1][y] == 0 || cells[x-1][y] == 7  ){
                                cells[x-1][y] = -11 ;
                            }
                            if ( cells[x-1][y-1] ==0 || cells[x-1][y-1] == 7 ){
                                cells[x-1][y-1] = -11 ;
                            }
                            if ( cells[x][y-1] ==0 || cells[x][y-1] == 7 ){
                                cells[x][y-1] = -11 ;
                            }
                            if ( cells[x+1][y] == 0 ||cells[x+1][y] == 7 ){
                                cells[x+1][y] = -11 ;
                            }
                            if ( cells[x+1][y+1] == 0 ||cells[x+1][y+1] == 7 ){
                                cells[x+1][y+1] = -11 ;
                            }
                            if ( cells[x][y+1] == 0 ||cells[x][y+1] == 7 ){
                                cells[x][y+1] = -11 ;
                            }
                            if (cells[x+1][y-1] == 0 || cells[x+1][y-1] == 7 ){
                                cells[x+1][y-1] = -11 ;
                            }
                            if ( cells[x-1][y+1] == 0 || cells[x-1][y+1] == 7 ) {
                                cells[x-1][y+1] = -11 ;
                            }

                        }
                    }
                }
            }
        }

        else if ( cells[i][j] == 23 ){
            cells[i][j] = -230 ;
            botDestroyedShip23++ ;
            if ( botDestroyedShip23 == 2 ){

                for ( int x = 0 ; x <= 9 ; x++ ){
                    for ( int y = 0 ; y<= 9 ; y++ ) {

                        if ( cells[x][y] == -230 ){

                            if ( cells[x-1][y] == 0 || cells[x-1][y] == 7  ){
                                cells[x-1][y] = -11 ;
                            }
                            if ( cells[x-1][y-1] ==0 || cells[x-1][y-1] == 7 ){
                                cells[x-1][y-1] = -11 ;
                            }
                            if ( cells[x][y-1] ==0 || cells[x][y-1] == 7 ){
                                cells[x][y-1] = -11 ;
                            }
                            if ( cells[x+1][y] == 0 ||cells[x+1][y] == 7 ){
                                cells[x+1][y] = -11 ;
                            }
                            if ( cells[x+1][y+1] == 0 ||cells[x+1][y+1] == 7 ){
                                cells[x+1][y+1] = -11 ;
                            }
                            if ( cells[x][y+1] == 0 ||cells[x][y+1] == 7 ){
                                cells[x][y+1] = -11 ;
                            }
                            if (cells[x+1][y-1] == 0 || cells[x+1][y-1] == 7 ){
                                cells[x+1][y-1] = -11 ;
                            }
                            if ( cells[x-1][y+1] == 0 || cells[x-1][y+1] == 7 ) {
                                cells[x-1][y+1] = -11 ;
                            }

                        }
                    }
                }
            }
        }

        else if ( cells[i][j] == 31 ){
            cells[i][j] = -310 ;
            botDestroyedShip31++ ;
            if ( botDestroyedShip31 ==3 ){

                for ( int x = 0 ; x <= 9 ; x++ ){
                    for ( int y = 0 ; y<= 9 ; y++ ) {

                        if ( cells[x][y] == -310 ){

                            if ( cells[x-1][y] == 0 || cells[x-1][y] == 7  ){
                                cells[x-1][y] = -11 ;
                            }
                            if ( cells[x-1][y-1] ==0 || cells[x-1][y-1] == 7 ){
                                cells[x-1][y-1] = -11 ;
                            }
                            if ( cells[x][y-1] ==0 || cells[x][y-1] == 7 ){
                                cells[x][y-1] = -11 ;
                            }
                            if ( cells[x+1][y] == 0 ||cells[x+1][y] == 7 ){
                                cells[x+1][y] = -11 ;
                            }
                            if ( cells[x+1][y+1] == 0 ||cells[x+1][y+1] == 7 ){
                                cells[x+1][y+1] = -11 ;
                            }
                            if ( cells[x][y+1] == 0 ||cells[x][y+1] == 7 ){
                                cells[x][y+1] = -11 ;
                            }
                            if (cells[x+1][y-1] == 0 || cells[x+1][y-1] == 7 ){
                                cells[x+1][y-1] = -11 ;
                            }
                            if ( cells[x-1][y+1] == 0 || cells[x-1][y+1] == 7 ) {
                                cells[x-1][y+1] = -11 ;
                            }

                        }
                    }
                }
            }
        }

        else if ( cells[i][j] == 32 ){
            cells[i][j] = -320 ;
            botDestroyedShip32++ ;
            if ( botDestroyedShip32 ==3 ){

                for ( int x = 0 ; x <= 9 ; x++ ){
                    for ( int y = 0 ; y<= 9 ; y++ ) {

                        if ( cells[x][y] == -320 ){

                            if ( cells[x-1][y] == 0 || cells[x-1][y] == 7  ){
                                cells[x-1][y] = -11 ;
                            }
                            if ( cells[x-1][y-1] ==0 || cells[x-1][y-1] == 7 ){
                                cells[x-1][y-1] = -11 ;
                            }
                            if ( cells[x][y-1] ==0 || cells[x][y-1] == 7 ){
                                cells[x][y-1] = -11 ;
                            }
                            if ( cells[x+1][y] == 0 ||cells[x+1][y] == 7 ){
                                cells[x+1][y] = -11 ;
                            }
                            if ( cells[x+1][y+1] == 0 ||cells[x+1][y+1] == 7 ){
                                cells[x+1][y+1] = -11 ;
                            }
                            if ( cells[x][y+1] == 0 ||cells[x][y+1] == 7 ){
                                cells[x][y+1] = -11 ;
                            }
                            if (cells[x+1][y-1] == 0 || cells[x+1][y-1] == 7 ){
                                cells[x+1][y-1] = -11 ;
                            }
                            if ( cells[x-1][y+1] == 0 || cells[x-1][y+1] == 7 ) {
                                cells[x-1][y+1] = -11 ;
                            }

                        }
                    }
                }
            }
        }


        else if ( cells[i][j] == 4 ){
            cells[i][j] = -410 ;
            botDestroyedShip4++ ;
            if ( botDestroyedShip4 ==4 ){

                for ( int x = 0 ; x <= 9 ; x++ ){
                    for ( int y = 0 ; y<= 9 ; y++ ) {

                        if ( cells[x][y] == -410 ){

                            if ( cells[x-1][y] == 0 || cells[x-1][y] == 7  ){
                                cells[x-1][y] = -11 ;
                            }
                            if ( cells[x-1][y-1] ==0 || cells[x-1][y-1] == 7 ){
                                cells[x-1][y-1] = -11 ;
                            }
                            if ( cells[x][y-1] ==0 || cells[x][y-1] == 7 ){
                                cells[x][y-1] = -11 ;
                            }
                            if ( cells[x+1][y] == 0 ||cells[x+1][y] == 7 ){
                                cells[x+1][y] = -11 ;
                            }
                            if ( cells[x+1][y+1] == 0 ||cells[x+1][y+1] == 7 ){
                                cells[x+1][y+1] = -11 ;
                            }
                            if ( cells[x][y+1] == 0 ||cells[x][y+1] == 7 ){
                                cells[x][y+1] = -11 ;
                            }
                            if (cells[x+1][y-1] == 0 || cells[x+1][y-1] == 7 ){
                                cells[x+1][y-1] = -11 ;
                            }
                            if ( cells[x-1][y+1] == 0 || cells[x-1][y+1] == 7 ) {
                                cells[x-1][y+1] = -11 ;
                            }

                        }
                    }
                }
            }
        }

        else if (cells[i][j] == 7 ){

            cells[i][j] = -11 ;
            turn = false ;
            if (cells2[i][j] == 0 ){
                cells2[i][j] = -11 ;

            }
            else if ( cells2[i][j] == 1 ) {
                cells2[i][j] = -10 ;

                cells2[i-1][j] = -11 ;
                cells2[i-1][j-1] = -11 ;
                cells2[i][j-1] = -11 ;
                cells2[i+1][j] = -11 ;
                cells2[i+1][j+1] = -11 ;
                cells2[i][j+1] = -11 ;
                cells2[i+1][j-1] = -11 ;
                cells2[i-1][j+1] = -11 ;

            }

            else if ( cells2[i][j] == 21 ){
                cells2[i][j] = -210 ;
                botDestroyedShip21++ ;
                if ( botDestroyedShip21 == 2 ){

                    for ( int x = 0 ; x <= 9 ; x++ ){
                        for ( int y = 0 ; y<= 9 ; y++ ) {

                            if ( cells2[x][y] == -210 ){

                                if ( cells2[x-1][y] == 0 || cells2[x-1][y] == 7  ){
                                    cells2[x-1][y] = -11 ;
                                }
                                if ( cells2[x-1][y-1] ==0 || cells2[x-1][y-1] == 7 ){
                                    cells2[x-1][y-1] = -11 ;
                                }
                                if ( cells2[x][y-1] ==0 || cells2[x][y-1] == 7 ){
                                    cells2[x][y-1] = -11 ;
                                }
                                if ( cells2[x+1][y] == 0 ||cells2[x+1][y] == 7 ){
                                    cells2[x+1][y] = -11 ;
                                }
                                if ( cells2[x+1][y+1] == 0 ||cells2[x+1][y+1] == 7 ){
                                    cells2[x+1][y+1] = -11 ;
                                }
                                if ( cells2[x][y+1] == 0 ||cells2[x][y+1] == 7 ){
                                    cells2[x][y+1] = -11 ;
                                }
                                if (cells[x+1][y-1] == 0 || cells2[x+1][y-1] == 7 ){
                                    cells[x+1][y-1] = -11 ;
                                }
                                if ( cells2[x-1][y+1] == 0 || cells2[x-1][y+1] == 7 ) {
                                    cells2[x-1][y+1] = -11 ;
                                }

                            }
                        }
                    }
                }
            }

            else if ( cells2[i][j] == 22 ){
                cells2[i][j] = -220 ;
                botDestroyedShip22++ ;
                if ( botDestroyedShip22 == 2 ){

                    for ( int x = 0 ; x <= 9 ; x++ ){
                        for ( int y = 0 ; y<= 9 ; y++ ) {

                            if ( cells2[x][y] == -220 ){

                                if ( cells2[x-1][y] == 0 || cells2[x-1][y] == 7  ){
                                    cells2[x-1][y] = -11 ;
                                }
                                if ( cells2[x-1][y-1] ==0 || cells2[x-1][y-1] == 7 ){
                                    cells2[x-1][y-1] = -11 ;
                                }
                                if ( cells2[x][y-1] ==0 || cells2[x][y-1] == 7 ){
                                    cells2[x][y-1] = -11 ;
                                }
                                if ( cells2[x+1][y] == 0 ||cells2[x+1][y] == 7 ){
                                    cells2[x+1][y] = -11 ;
                                }
                                if ( cells2[x+1][y+1] == 0 ||cells2[x+1][y+1] == 7 ){
                                    cells2[x+1][y+1] = -11 ;
                                }
                                if ( cells2[x][y+1] == 0 ||cells2[x][y+1] == 7 ){
                                    cells2[x][y+1] = -11 ;
                                }
                                if (cells2[x+1][y-1] == 0 || cells2[x+1][y-1] == 7 ){
                                    cells[x+1][y-1] = -11 ;
                                }
                                if ( cells2[x-1][y+1] == 0 || cells2[x-1][y+1] == 7 ) {
                                    cells2[x-1][y+1] = -11 ;
                                }

                            }
                        }
                    }
                }
            }

            else if ( cells2[i][j] == 23 ){
                cells2[i][j] = -230 ;
                botDestroyedShip23++ ;
                if ( botDestroyedShip23 == 2 ){

                    for ( int x = 0 ; x <= 9 ; x++ ){
                        for ( int y = 0 ; y<= 9 ; y++ ) {

                            if ( cells2[x][y] == -230 ){

                                if ( cells2[x-1][y] == 0 || cells2[x-1][y] == 7  ){
                                    cells2[x-1][y] = -11 ;
                                }
                                if ( cells2[x-1][y-1] ==0 || cells2[x-1][y-1] == 7 ){
                                    cells2[x-1][y-1] = -11 ;
                                }
                                if ( cells2[x][y-1] ==0 || cells2[x][y-1] == 7 ){
                                    cells2[x][y-1] = -11 ;
                                }
                                if ( cells2[x+1][y] == 0 ||cells2[x+1][y] == 7 ){
                                    cells2[x+1][y] = -11 ;
                                }
                                if ( cells2[x+1][y+1] == 0 ||cells2[x+1][y+1] == 7 ){
                                    cells2[x+1][y+1] = -11 ;
                                }
                                if ( cells2[x][y+1] == 0 ||cells2[x][y+1] == 7 ){
                                    cells2[x][y+1] = -11 ;
                                }
                                if (cells2[x+1][y-1] == 0 || cells2[x+1][y-1] == 7 ){
                                    cells2[x+1][y-1] = -11 ;
                                }
                                if ( cells2[x-1][y+1] == 0 || cells2[x-1][y+1] == 7 ) {
                                    cells2[x-1][y+1] = -11 ;
                                }

                            }
                        }
                    }
                }
            }

            else if ( cells2[i][j] == 31 ){
                cells2[i][j] = -310 ;
                botDestroyedShip31++ ;
                if ( botDestroyedShip31 ==3 ){

                    for ( int x = 0 ; x <= 9 ; x++ ){
                        for ( int y = 0 ; y<= 9 ; y++ ) {

                            if ( cells2[x][y] == -310 ){

                                if ( cells2[x-1][y] == 0 || cells2[x-1][y] == 7  ){
                                    cells2[x-1][y] = -11 ;
                                }
                                if ( cells2[x-1][y-1] ==0 || cells2[x-1][y-1] == 7 ){
                                    cells2[x-1][y-1] = -11 ;
                                }
                                if ( cells2[x][y-1] ==0 || cells2[x][y-1] == 7 ){
                                    cells2[x][y-1] = -11 ;
                                }
                                if ( cells2[x+1][y] == 0 ||cells2[x+1][y] == 7 ){
                                    cells2[x+1][y] = -11 ;
                                }
                                if ( cells2[x+1][y+1] == 0 ||cells2[x+1][y+1] == 7 ){
                                    cells2[x+1][y+1] = -11 ;
                                }
                                if ( cells2[x][y+1] == 0 ||cells2[x][y+1] == 7 ){
                                    cells2[x][y+1] = -11 ;
                                }
                                if (cells2[x+1][y-1] == 0 || cells2[x+1][y-1] == 7 ){
                                    cells2[x+1][y-1] = -11 ;
                                }
                                if ( cells2[x-1][y+1] == 0 || cells2[x-1][y+1] == 7 ) {
                                    cells2[x-1][y+1] = -11 ;
                                }

                            }
                        }
                    }
                }
            }

            else if ( cells2[i][j] == 32 ){
                cells2[i][j] = -320 ;
                botDestroyedShip32++ ;
                if ( botDestroyedShip32 ==3 ){

                    for ( int x = 0 ; x <= 9 ; x++ ){
                        for ( int y = 0 ; y<= 9 ; y++ ) {

                            if ( cells2[x][y] == -320 ){

                                if ( cells2[x-1][y] == 0 || cells2[x-1][y] == 7  ){
                                    cells2[x-1][y] = -11 ;
                                }
                                if ( cells2[x-1][y-1] ==0 || cells2[x-1][y-1] == 7 ){
                                    cells2[x-1][y-1] = -11 ;
                                }
                                if ( cells2[x][y-1] ==0 || cells2[x][y-1] == 7 ){
                                    cells2[x][y-1] = -11 ;
                                }
                                if ( cells2[x+1][y] == 0 ||cells2[x+1][y] == 7 ){
                                    cells2[x+1][y] = -11 ;
                                }
                                if ( cells2[x+1][y+1] == 0 ||cells2[x+1][y+1] == 7 ){
                                    cells2[x+1][y+1] = -11 ;
                                }
                                if ( cells2[x][y+1] == 0 ||cells2[x][y+1] == 7 ){
                                    cells2[x][y+1] = -11 ;
                                }
                                if (cells2[x+1][y-1] == 0 || cells2[x+1][y-1] == 7 ){
                                    cells2[x+1][y-1] = -11 ;
                                }
                                if ( cells2[x-1][y+1] == 0 || cells2[x-1][y+1] == 7 ) {
                                    cells2[x-1][y+1] = -11 ;
                                }

                            }
                        }
                    }
                }
            }


            else if ( cells2[i][j] == 4 ){
                cells2[i][j] = -410 ;
                botDestroyedShip4++ ;
                if ( botDestroyedShip4 ==4 ){

                    for ( int x = 0 ; x <= 9 ; x++ ){
                        for ( int y = 0 ; y<= 9 ; y++ ) {

                            if ( cells2[x][y] == -410 ){

                                if ( cells2[x-1][y] == 0 || cells2[x-1][y] == 7  ){
                                    cells2[x-1][y] = -11 ;
                                }
                                if ( cells2[x-1][y-1] ==0 || cells2[x-1][y-1] == 7 ){
                                    cells2[x-1][y-1] = -11 ;
                                }
                                if ( cells2[x][y-1] ==0 || cells2[x][y-1] == 7 ){
                                    cells2[x][y-1] = -11 ;
                                }
                                if ( cells2[x+1][y] == 0 ||cells2[x+1][y] == 7 ){
                                    cells2[x+1][y] = -11 ;
                                }
                                if ( cells2[x+1][y+1] == 0 ||cells2[x+1][y+1] == 7 ){
                                    cells2[x+1][y+1] = -11 ;
                                }
                                if ( cells2[x][y+1] == 0 ||cells2[x][y+1] == 7 ){
                                    cells2[x][y+1] = -11 ;
                                }
                                if (cells2[x+1][y-1] == 0 || cells2[x+1][y-1] == 7 ){
                                    cells2[x+1][y-1] = -11 ;
                                }
                                if ( cells2[x-1][y+1] == 0 || cells2[x-1][y+1] == 7 ) {
                                    cells2[x-1][y+1] = -11 ;
                                }

                            }
                        }
                    }
                }
            }

            else if ( cells2[i][j] == 7 ) {
                cells2[i][j] = -11 ;
            }


        }


    }



}


void DialogGameAI::userPlay(int arm)
{

}

