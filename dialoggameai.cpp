#include "dialoggameai.h"
#include "ui_dialoggameai.h"
#include <stdlib.h>
#include <windows.h>
#include <QMediaPlayer>
#include<QAudioOutput>

DialogGameAI::DialogGameAI(User& user,Arms& arms,int** cells,QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::DialogGameAI),
    user(user),
    arms(arms)

{
    ui->setupUi(this);

    this->Cells = cells;

    ui->linearAttackCounter->setText(QString::number(arms.getLineAttackerCount()));
    ui->atomicBombCounter->setText(QString::number(arms.getAtomicBombCount()));
    ui->trackerCounter->setText(QString::number(arms.getTrackerCount()));

    botDestroyedShip21 = 0;
    botDestroyedShip22 = 0;
    botDestroyedShip23 = 0;
    botDestroyedShip31 = 0;
    botDestroyedShip32 = 0;
    botDestroyedShip4 = 0;

    botTurn = true;
    Display(Cells);
    botTurn = false ;
    botGameBoard = makeGameBoard();
    Display(botGameBoard);
    turn = true;
    connect(ui->botTableWidget, &QTableWidget::cellClicked, this, [this](int row,int column){
        userPlay(row,column,0);
    });


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
        gameBoard[0][8] = 12;
        gameBoard[1][5] = 23;
        gameBoard[1][6] = 23;
        gameBoard[2][2] = 21;
        gameBoard[2][1] = 21;
        gameBoard[3][6] = 22;
        gameBoard[3][7] = 22;
        gameBoard[4][1] = 7;
        gameBoard[4][8] = 8;
        gameBoard[5][5] = 31;
        gameBoard[5][6] = 31;
        gameBoard[5][7] = 31;
        gameBoard[7][1] = 32;
        gameBoard[7][2] = 32;
        gameBoard[7][3] = 33;
        gameBoard[7][8] = 8;
        gameBoard[9][1] = 41;
        gameBoard[9][2] = 41;
        gameBoard[9][3] = 41;
        gameBoard[9][4] = 41;
        gameBoard[9][6] = 7;
        gameBoard[8][8] = 13;
    }
    return gameBoard;
}


void DialogGameAI::on_linearAttackbutton_clicked()
{
    if (arms.getLineAttackerCount()>0&&turn)
    {
        arms.linearAttackMinus();
        ui->linearAttackCounter->setText(QString::number(arms.getLineAttackerCount()));
        disconnect  (ui->botTableWidget,&QTableWidget::cellClicked,this,nullptr);
        connect(ui->botTableWidget, &QTableWidget::cellClicked, this, [this](int row, int column) {
            userPlay(row, column, 1);
            disconnect(ui->botTableWidget,&QTableWidget::cellClicked,nullptr,nullptr);

            connect(ui->botTableWidget, &QTableWidget::cellClicked, this, [this](int row,int column){
                userPlay(row,column,0);
            });

        });
    }
}


void DialogGameAI::on_atomicBombButton_clicked()
{
    if (arms.getAtomicBombCount()>0&&turn)
    {
        arms.atomicBombMinus();
        ui->atomicBombCounter->setText(QString::number(arms.getAtomicBombCount()));
       // userPlay(2);
    }
}



void DialogGameAI::on_trackerButton_clicked()
{
    if (arms.getTrackerCount()>0&&turn)
    {
        arms.trackerMinus();
        ui->atomicBombCounter->setText(QString::number(arms.getTrackerCount()));
       // userPlay(3);
    }
}

void DialogGameAI::Display(int** cells)
{
    int ship21Counter = 0;
    int ship22Counter = 0;
    int ship23Counter = 0;
    int ship31Counter = 0;
    int ship32Counter = 0;
    int ship41Counter = 0;
    int Vship21Counter = 0;
    int Vship22Counter = 0;
    int Vship23Counter = 0;
    int Vship31Counter = 0;
    int Vship32Counter = 0;
    int Vship41Counter = 0;
    if (botTurn)
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
                }
                else if(cells[i][j] == 0)
                {
                    ui->tableWidget->takeItem(i,j);
                }
                else if (cells[i][j] == 21)
                {
                    ship21Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship2" + QString::number(ship21Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);

                }
                else if (cells[i][j] == 22)
                {
                    ship22Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship2" + QString::number(ship22Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);

                }
                else if (cells[i][j] == 23)
                {
                    ship23Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship2" + QString::number(ship23Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);

                }
                else if (cells[i][j] == -21)
                {
                    Vship21Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship2" + QString::number(Vship21Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -22)
                {
                    Vship22Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship2" + QString::number(Vship22Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -23)
                {
                    Vship23Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship2" + QString::number(Vship23Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == 31)
                {
                    ship31Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship3" + QString::number(ship31Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == 32)
                {
                    ship32Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship3" + QString::number(ship32Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -31)
                {
                    Vship31Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship3" + QString::number(Vship31Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -32)
                {
                    Vship32Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship3" + QString::number(Vship32Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == 41)
                {
                    ship41Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship4" + QString::number(ship41Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -41)
                {
                    Vship41Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship4" + QString::number(Vship41Counter) + ".png");
                    item->setIcon(icon);
                    ui->tableWidget->setItem(i, j, item);
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
                else if (cells[i][j] == -110)
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
    }
    else
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
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if(cells[i][j] == 0)
                {
                    ui->botTableWidget->takeItem(i,j);
                }
                else if (cells[i][j] == 21)
                {
                    ship21Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship2" + QString::number(ship21Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);

                }
                else if (cells[i][j] == 22)
                {
                    ship22Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship2" + QString::number(ship22Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);

                }
                else if (cells[i][j] == 23)
                {
                    ship23Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship2" + QString::number(ship23Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);

                }
                else if (cells[i][j] == -21)
                {
                    Vship21Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship2" + QString::number(Vship21Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -22)
                {
                    Vship22Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship2" + QString::number(Vship22Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -23)
                {
                    Vship23Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship2" + QString::number(Vship23Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == 31)
                {
                    ship31Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship3" + QString::number(ship31Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == 32)
                {
                    ship32Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship3" + QString::number(ship32Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -31)
                {
                    Vship31Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship3" + QString::number(Vship31Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -32)
                {
                    Vship32Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship3" + QString::number(Vship32Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == 41)
                {
                    ship41Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/ship4" + QString::number(ship41Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -41)
                {
                    Vship41Counter++;
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/Vship4" + QString::number(Vship41Counter) + ".png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if(cells[i][j] == 7)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/mine2.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if(cells[i][j] == 8)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/airDefense.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if(cells[i][j] == -11)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/emptyCell.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] ==-110)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/X.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -210||cells[i][j] == -220||cells[i][j] == -230)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/X.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if(cells[i][j]==-310||cells[i][j] == -320)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/X.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -410)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/X.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
            }
        }
     }

}


static bool mineFlag = false;

void DialogGameAI::makeEmptyAround(int** cells,int value)
{
    for ( int x = 0 ; x <= 9 ; x++ ){
        for ( int y = 0 ; y<= 9 ; y++ ) {

            if ( cells[x][y] == value ){

                if(x-1>=0)
                    if ( cells[x-1][y] == 0 || cells[x-1][y] == 7  ){
                        cells[x-1][y] = -11 ;
                    }
                if(x-1 >= 0 && y-1 >= 0)
                    if ( cells[x-1][y-1] ==0 || cells[x-1][y-1] == 7 ){
                        cells[x-1][y-1] = -11 ;
                    }
                if(y-1 >= 0)
                    if ( cells[x][y-1] ==0 || cells[x][y-1] == 7 ){
                        cells[x][y-1] = -11 ;
                    }
                if(x+1 <= 9)
                    if ( cells[x+1][y] == 0 ||cells[x+1][y] == 7 ){
                        cells[x+1][y] = -11 ;
                    }
                if(x+1 <= 9 && y+1 <= 9)
                    if ( cells[x+1][y+1] == 0 ||cells[x+1][y+1] == 7 ){
                        cells[x+1][y+1] = -11 ;
                    }
                if(y+1 <= 9)
                    if ( cells[x][y+1] == 0 ||cells[x][y+1] == 7 ){
                        cells[x][y+1] = -11 ;
                    }
                if(y-1 >= 0&& x+1<=9)
                    if (cells[x+1][y-1] == 0 || cells[x+1][y-1] == 7 ){
                        cells[x+1][y-1] = -11 ;
                    }
                if(x-1>=0 && y+1<=9)
                    if ( cells[x-1][y+1] == 0 || cells[x-1][y+1] == 7 ) {
                        cells[x-1][y+1] = -11 ;
                    }

            }
        }
    }

}
void DialogGameAI::Attack(int** cells,int i,int j)
{
    if (cells[i][j] == 0 ||cells[i][j] == 8|| cells[i][j] == -110 || cells[i][j] == -210 ||
           cells[i][j] == -220 || cells[i][j] == -230 || cells[i][j] == -310 || cells[i][j] == -320|| cells[i][j] == -410){
        cells[i][j] = -11 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Miss.mp3"));
        musicPlayer->play();
        turn = !turn;
        if (mineFlag == true)
        {
            turn = !turn;
        }

    }
    else if ( cells[i][j] == 11|| cells[i][j] == 12||cells[i][j] == 13) {
        cells[i][j] = -110 ;
        makeEmptyAround(cells,-110);
    }
    else if ( cells[i][j] == 21 ){
        cells[i][j] = -210 ;
        botDestroyedShip21++ ;
        if ( botDestroyedShip21 == 2 ){
            makeEmptyAround(cells,-210);
        }
    }

    else if ( cells[i][j] == 22 ){
        cells[i][j] = -220 ;
        botDestroyedShip22++ ;
        if ( botDestroyedShip22 == 2 ){
            makeEmptyAround(cells,-220);
        }
    }

    else if ( cells[i][j] == 23 ){
        cells[i][j] = -230 ;
        botDestroyedShip23++ ;
        if ( botDestroyedShip23 == 2 ){

            makeEmptyAround(cells,-230);
        }
    }

    else if ( cells[i][j] == 31 ){
        cells[i][j] = -310 ;
        botDestroyedShip31++ ;
        if ( botDestroyedShip31 ==3 ){
            makeEmptyAround(cells,-310);
        }
    }

    else if ( cells[i][j] == 32 ){
        cells[i][j] = -320 ;
        botDestroyedShip32++ ;
        if ( botDestroyedShip32 ==3 ){
            makeEmptyAround(cells,-320);
        }
    }


    else if ( cells[i][j] == 41 ){
        cells[i][j] = -410 ;
        botDestroyedShip4++ ;
        if ( botDestroyedShip4 == 4 ){
            makeEmptyAround(cells,-410);
        }
    }

    else if (cells[i][j] == 7 ){

        cells[i][j] = -11 ;
        turn = true ;
        mineFlag = true;
        play(i,j,0);
    }


}
void DialogGameAI::play(int i , int j , int arm)
{

    int** cells;
    if (turn)
    {
         cells = botGameBoard;
         botTurn = false;
    }
    else
    {
        cells = Cells;
         botTurn = true;
    }

    if(arm==0)
    {
        Attack(cells,i,j);
    }
    else if(arm == 1)
    {
        for(int j = 9 ; j >=0 ; j--)
        {


            if(cells[i][j] == 11||cells[i][j] ==12||cells[i][j] == 13 ||cells[i][j] == 21||cells[i][j] == 22 )
            {
                Attack(cells,i,j);
                turn = true;
                break;
            }
            if(cells[i][j] == 23 || cells[i][j] == 31 || cells[i][j] == 32 || cells[i][j] == 41 || cells[i][j] == 7)
            {
                Attack(cells,i,j);
                turn = true;
                break;
            }
            Attack(cells,i,j);
            turn = true;
            if(j == 0)
            {
                turn  = false;
                break;
            }
        }
    }

    Display(cells);

    if(!turn)
    {
        timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &DialogGameAI::botPlay);
        timer->start(1000);
    }
    if (mineFlag == true)
    {
        turn = !turn;
    }
}

void DialogGameAI::botPlay()
{

    if (timer)
    {
        timer->stop();
        timer->deleteLater();
        timer = nullptr;
    }
    int i = rand() % 9 + 1;
    int j = rand() % 9 + 1;
    play(i,j,0);
}

void DialogGameAI::userPlay(int row,int column,int arm)
{

    play(row,column,arm);
}


