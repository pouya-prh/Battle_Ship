#include "dialoggameai.h"
#include "ui_dialoggameai.h"
#include <stdlib.h>
#include <QThread>
#include <windows.h>
#include <QMediaPlayer>
#include<QAudioOutput>
#include <QPropertyAnimation>
#include "dialoglost.h"
#include "dialogwon.h"
DialogGameAI::DialogGameAI(User& user,Arms& arms,int** cells,QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::DialogGameAI),
    user(user),
    arms(arms)

{
    ui->setupUi(this);
    Drop = 0;
    this->Cells = cells;
    ui->botTableWidget->setAcceptDrops(true);
    setAcceptDrops(true);
    ui->trackerButton2->hide();
    ui->planeLabel->hide();
    ui->atomicZone->hide();
    ui->linearAttackCounter->setText(QString::number(arms.getLineAttackerCount()));
    ui->atomicBombCounter->setText(QString::number(arms.getAtomicBombCount()));
    ui->trackerCounter->setText(QString::number(arms.getTrackerCount()));

    botDestroyedShip21 = 0;
    botDestroyedShip22 = 0;
    botDestroyedShip23 = 0;
    botDestroyedShip31 = 0;
    botDestroyedShip32 = 0;
    botDestroyedShip4 = 0;
    userDestroyedShip21 = 0;
    userDestroyedShip22 = 0;
    userDestroyedShip23 = 0;
    userDestroyedShip31 = 0;
    userDestroyedShip32 = 0;
    userDestroyedShip4 = 0;

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
             Animation(row,column,1);
            disconnect(ui->botTableWidget,&QTableWidget::cellClicked,nullptr,nullptr);

            connect(ui->botTableWidget, &QTableWidget::cellClicked, this, [this](int row,int column){
               userPlay(row, column, 0);
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
        ui->atomicZone->show();
    }
}



void DialogGameAI::on_trackerButton_clicked()
{
    if (arms.getTrackerCount()>0&&turn)
    {
        arms.trackerMinus();
        ui->trackerCounter->setText(QString::number(arms.getTrackerCount()));
        ui->trackerButton2->show();
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
                else if(cells[i][j] == -70)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/meteor.png");
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
              if(cells[i][j] == -11)
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
                else if(cells[i][j] == -70)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/meteor.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
                else if (cells[i][j] == -100)
                {
                    QTableWidgetItem *item = new QTableWidgetItem();
                    QIcon icon(":/fire.png");
                    item->setIcon(icon);
                    ui->botTableWidget->setItem(i, j, item);
                }
            }
        }
     }

}




void DialogGameAI::makeEmptyAround(int** cells,int value)
{    for ( int x = 0 ; x <= 9 ; x++ ){
        for ( int y = 0 ; y<= 9 ; y++ ) {

            if ( cells[x][y] == value ){

                if(x-1>=0)
                    if(cells[x-1][y] >=  0)
                        cells[x-1][y] = -11 ;

                if(x-1 >= 0 && y-1 >= 0)
                    if ( cells[x-1][y-1] >=0 ){
                        cells[x-1][y-1] = -11 ;
                    }
                if(y-1 >= 0)
                    if ( cells[x][y-1] >=0 ){
                        cells[x][y-1] = -11 ;
                    }
                if(x+1 <= 9)
                    if ( cells[x+1][y] >= 0){
                        cells[x+1][y] = -11 ;
                    }
                if(x+1 <= 9 && y+1 <= 9)
                    if ( cells[x+1][y+1] >= 0 ){
                        cells[x+1][y+1] = -11 ;
                    }
                if(y+1 <= 9)
                    if ( cells[x][y+1] >= 0 ){
                        cells[x][y+1] = -11 ;
                    }
                if(y-1 >= 0&& x+1<=9)
                    if (cells[x+1][y-1] >= 0 ){
                        cells[x+1][y-1] = -11 ;
                    }
                if(x-1>=0 && y+1<=9)
                    if ( cells[x-1][y+1] >= 0  ) {
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
    }
    else if ( cells[i][j] == 11|| cells[i][j] == 12||cells[i][j] == 13) {
        cells[i][j] = -110 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        makeEmptyAround(cells,-110);
    }
    else if ( cells[i][j] == 21 ){
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        cells[i][j] = -210 ;
        if(turn)
          botDestroyedShip21++ ;
        if ( botDestroyedShip21 == 2 ){
            makeEmptyAround(cells,-210);
        }
        else
        {
            userDestroyedShip21++ ;
            if ( userDestroyedShip21 == 2 ){
                makeEmptyAround(cells,-210);
            }
        }

    }

    else if ( cells[i][j] == 22 ){
        cells[i][j] = -220 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if(turn)
            botDestroyedShip22++ ;
        if ( botDestroyedShip22 == 2 ){
            makeEmptyAround(cells,-220);
        }
        else
        {
            userDestroyedShip22++ ;
            if ( userDestroyedShip22 == 2 ){
                makeEmptyAround(cells,-220);
            }
        }
    }

    else if ( cells[i][j] == 23 ){
        cells[i][j] = -230 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if(turn)
            botDestroyedShip21++ ;
        if ( botDestroyedShip23 == 2 ){
            makeEmptyAround(cells,-230);
        }
        else
        {
            userDestroyedShip23++ ;
            if ( userDestroyedShip21 == 2 ){
                makeEmptyAround(cells,-230);
            }
        }
    }

    else if ( cells[i][j] == 31 ){
        cells[i][j] = -310 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if(turn)
            botDestroyedShip31++ ;
        if ( botDestroyedShip31 == 3 ){
            makeEmptyAround(cells,-310);
        }
        else
        {
            userDestroyedShip31++ ;
            if ( userDestroyedShip31 == 3 ){
                makeEmptyAround(cells,-310);
            }
        }
    }

    else if ( cells[i][j] == 32 ){
        cells[i][j] = -320 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if(turn)
            botDestroyedShip31++ ;
        if ( botDestroyedShip31 == 3 ){
            makeEmptyAround(cells,-320);
        }
        else
        {
            userDestroyedShip32++ ;
            if ( userDestroyedShip32 == 3 ){
                makeEmptyAround(cells,-320);
            }
        }
    }


    else if ( cells[i][j] == 41 ){
        cells[i][j] = -410 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if(turn)
            botDestroyedShip4++ ;
        if ( botDestroyedShip4 == 4 ){
            makeEmptyAround(cells,-410);
        }
        else
        {
            userDestroyedShip4++ ;
            if ( userDestroyedShip4 == 4 ){
                makeEmptyAround(cells,-410);
            }
        }
    }

    else if (cells[i][j] == 7 ){

        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        cells[i][j] = -70 ;
        if(turn)
            cells = Cells;
        else
            cells = botGameBoard;

        if (cells[i][j] == 0 ||cells[i][j] == 8|| cells[i][j] == -110 || cells[i][j] == -210 ||
            cells[i][j] == -220 || cells[i][j] == -230 || cells[i][j] == -310 || cells[i][j] == -320|| cells[i][j] == -410){
            cells[i][j] = -11 ;
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Miss.mp3"));
            musicPlayer->play();

        }
        else if ( cells[i][j] == 11|| cells[i][j] == 12||cells[i][j] == 13) {
            cells[i][j] = -110 ;
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            makeEmptyAround(cells,-110);
        }
        else if ( cells[i][j] == 21 ){
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            cells[i][j] = -210 ;
            botDestroyedShip21++ ;
            if(turn)
                botDestroyedShip21++ ;
            if ( botDestroyedShip21 == 2 ){
                makeEmptyAround(cells,-210);
            }
            else
            {
                userDestroyedShip21++ ;
                if ( userDestroyedShip21 == 2 ){
                    makeEmptyAround(cells,-210);
                }
            }
        }

        else if ( cells[i][j] == 22 ){
            cells[i][j] = -220 ;
            botDestroyedShip22++ ;
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            if(turn)
                botDestroyedShip22++ ;
            if ( botDestroyedShip22 == 2 ){
                makeEmptyAround(cells,-220);
            }
            else
            {
                userDestroyedShip22++ ;
                if ( userDestroyedShip22 == 2 ){
                    makeEmptyAround(cells,-220);
                }
            }
        }

        else if ( cells[i][j] == 23 ){
            cells[i][j] = -230 ;
            botDestroyedShip23++ ;
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            if(turn)
                botDestroyedShip21++ ;
            if ( botDestroyedShip23 == 2 ){
                makeEmptyAround(cells,-230);
            }
            else
            {
                userDestroyedShip23++ ;
                if ( userDestroyedShip21 == 2 ){
                    makeEmptyAround(cells,-230);
                }
            }
        }

        else if ( cells[i][j] == 31 ){
            cells[i][j] = -310 ;
            botDestroyedShip31++ ;
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            if(turn)
                botDestroyedShip31++ ;
            if ( botDestroyedShip31 == 3 ){
                makeEmptyAround(cells,-310);
            }
            else
            {
                userDestroyedShip31++ ;
                if ( userDestroyedShip31 == 3 ){
                    makeEmptyAround(cells,-310);
                }
            }
        }

        else if ( cells[i][j] == 32 ){
            cells[i][j] = -320 ;
            botDestroyedShip32++ ;
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            if(turn)
                botDestroyedShip31++ ;
            if ( botDestroyedShip31 == 3 ){
                makeEmptyAround(cells,-320);
            }
            else
            {
                userDestroyedShip32++ ;
                if ( userDestroyedShip32 == 3 ){
                    makeEmptyAround(cells,-320);
                }
            }
        }


        else if ( cells[i][j] == 41 ){
            cells[i][j] = -410 ;
            botDestroyedShip4++ ;
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            if(turn)
                botDestroyedShip4++ ;
            if ( botDestroyedShip4 == 4 ){
                makeEmptyAround(cells,-410);
            }
            else
            {
                userDestroyedShip4++ ;
                if ( userDestroyedShip4 == 4 ){
                    makeEmptyAround(cells,-410);
                }
            }
        }

        else if (cells[i][j] == 7 ){

            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
            musicPlayer->play();
            cells[i][j] = -70 ;
            if(turn)
                cells = Cells;
            else
                cells = botGameBoard;
        }
        if(turn)
        {
            botTurn = true;
            Display(Cells);
        }
        else
        {
            botTurn = false;
            Display(botGameBoard);
        }
         turn = !turn;
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
        bool isDefense = false;
        for(int j = 9 ; j >= 0 ; j--)
        {
            if (cells[i][j] == 8)
            {
                cells[i][j] = 0;
                isDefense = true;
            }
        }
        if(!isDefense)
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
    }
    else if (arm == 2)
    {
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/AtomicBomb.mp3"));

        for(int row = i ; row< i +4 ; row++)
        {
            for (int column = j ; column < j+4 ; column++)
            {
                cells[row][column] = -100;


            }
            musicPlayer->play();
        }
        turn = !turn;
    }


    Display(cells);

    if (!turn)
    {

        botTurn = false;
        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
    }
    else
    {

        botTurn = true;
        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                       "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
    }
    WonOrLost();
    if(!turn)
    {
        timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &DialogGameAI::botPlay);
        timer->start(400);
    }



}

void DialogGameAI::WonOrLost()
{
    bool lost = true;
    bool won = true;

    for (int i = 0 ; i < 10 ;i++)
    {
        if (!lost)
            break;
        for (int j = 0 ; j <10 ; j++)
        {
            if (Cells[i][j] == 11 || Cells[i][j] == 12 ||Cells[i][j] == 13 ||Cells[i][j] == 21
                ||Cells[i][j] == 22||Cells[i][j] == 23 ||Cells[i][j] == 31||Cells[i][j] == 32||Cells[i][j] == 41)
            {
                lost = false;
                break;
            }
            if (Cells[i][j] == -21||Cells[i][j] == -22||Cells[i][j] == -23 ||Cells[i][j] == -31||Cells[i][j] == -32||Cells[i][j] == -41)
            {
                lost = false;
                break;
            }
        }
    }
    if (lost)
    {
        int point = user.GetPoint();
        if (user.GetLevel()==0)
        {

            user.SetPoint(point -5);
        }
        else if (user.GetLevel() == 1)
        {
            user.SetPoint(point - 10);
        }
        else if (user.GetLevel() == 2)
        {
            user.SetPoint(point  -15);
        }
        else if (user.GetLevel() == 3)
        {
            user.SetPoint(point - 20);
        }
        else if (user.GetLevel() == 4)
        {
            user.SetPoint(point - 25);
        }
        this->close();
        DialogLost* lostPage = new DialogLost(user);
        lostPage->show();
    }
    for (int i = 0 ; i < 10 ;i++)
    {
        for (int j = 0 ; j <10 ; j++)
        {
            if (!won)
                break;
            if (botGameBoard[i][j] == 11 || botGameBoard[i][j] == 12 ||botGameBoard[i][j] == 13 ||botGameBoard[i][j] == 21
                ||botGameBoard[i][j] == 22||botGameBoard[i][j] == 23 ||botGameBoard[i][j] == 31||botGameBoard[i][j] == 32||botGameBoard[i][j] == 41)
            {
                won = false;
                break;
            }
            if (botGameBoard[i][j] == -21||botGameBoard[i][j] == -22||botGameBoard[i][j] == -23 ||botGameBoard[i][j] == -31||botGameBoard[i][j] == -32||botGameBoard[i][j] == -41)
            {
                won = false;
                break;
            }
        }
    }
    if (won)
    {
        for (int i = 0 ; i <10;i++)
        {
            for (int j = 0 ; j <10;j++)
            {
                if (Cells[i][j] == 41 || Cells[i][j] == -41)
                    Drop +=20;
                else if (Cells[i][j] == 32|| Cells[i][j] == 32 || Cells[i][j] == -31 || Cells[i][j] == -32)
                    Drop += 15;
                else if (Cells[i][j] == 21 || Cells[i][j] == 22 || Cells[i][j] == 23 || Cells[i][j] == -21 || Cells[i][j] == -22 || Cells[i][j] == -23)
                    Drop += 10;
                else if (Cells[i][j] == 11 || Cells[i][j] == 12 || Cells[i][j] == 13)
                    Drop += 5;
            }
        }
        int drop = user.GetDrop();
        user.SetDrop(drop + Drop);
        int point = user.GetPoint();
        if (user.GetLevel()==0)
        {

            user.SetPoint(point + 10);
        }
        else if (user.GetLevel() == 1)
        {
            user.SetPoint(point + 20);
        }
        else if (user.GetLevel() == 2)
        {
             user.SetPoint(point + 30);
        }
        else if (user.GetLevel() == 3)
        {
            user.SetPoint(point + 40);
        }
        else if (user.GetLevel() == 4)
        {
            user.SetPoint(point + 50);
        }
        point = user.GetPoint();
        if (point >=50 && user.GetLevel() == 0)
        {
            point -= 50 ;
            user.SetPoint(point);
            user.SetLevel(1);
        }
        else if (point >=75 && user.GetLevel() == 1)
        {
            point -= 75 ;
            user.SetPoint(point);
            user.SetLevel(2);
        }
        else if (point >=125 && user.GetLevel() == 2)
        {
            point -= 125 ;
            user.SetPoint(point);
            user.SetLevel(3);
        }
        else if (point >=200 && user.GetLevel() == 3)
        {
            point -= 200 ;
            user.SetPoint(point);
            user.SetLevel(4);
        }

        this->close();
        DialogWon* wonPage = new DialogWon(user);
        wonPage->show();
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

    int i , j ;
    do
    {
        i = rand() % 9 + 1;
        j  = rand() % 9 + 1;
    }
    while (Cells[i][j] == -11 ||Cells[i][j] == -110||Cells[i][j] == -210||Cells[i][j] == -220||
           Cells[i][j] == -230||Cells[i][j] == -310||Cells[i][j] == -320||Cells[i][j] == -410);

    play(i,j,0);

}

void DialogGameAI::Animation(int row,int column,int which)
{


    ui->planeLabel->show();
    QMediaPlayer* musicPlayer = new QMediaPlayer();
    QAudioOutput* output = new QAudioOutput();
    musicPlayer->setAudioOutput(output);
    musicPlayer->setSource(QUrl("qrc:/Plane.mp3"));
    musicPlayer->play();
    QPropertyAnimation *animation = new QPropertyAnimation(ui->planeLabel, "geometry");
    animation->setDuration(3000);
    int mouseX = QCursor::pos().x();
    int labelWidth = ui->planeLabel->width();
    int labelHeight = ui->planeLabel->height();
    int endY = this->height();
    int endX = this->width();
    animation->setStartValue(QRect(mouseX-500, 0, labelWidth, labelHeight));
    animation->setEndValue(QRect(endX,endY-100 , labelWidth, labelHeight));

    connect(animation, &QPropertyAnimation::finished, this, [this,row, column,which]()
        {
        if(which == 1) {
            userPlay(row,column,1);
            }
        else
        {
            userPlay(row,column,2);
        }

        });

    animation->start(QAbstractAnimation::DeleteWhenStopped);

}

void DialogGameAI::userPlay(int row,int column,int arm)
{
    if (turn)
    play(row,column,arm);
}

void DialogGameAI::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {
        QWidget *sourceWidget = qobject_cast<QWidget *>(event->source());
        if (sourceWidget) {
            sourceWidget->hide();
        }

        event->acceptProposedAction();
    }
}

void DialogGameAI::dragMoveEvent(QDragMoveEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {
        event->acceptProposedAction();
    }
}
void DialogGameAI::dropEvent(QDropEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {

        DraggableButton *sourceButton = qobject_cast<DraggableButton*>(event->source());
        QByteArray itemData = event->mimeData()->data("application/x-ship");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPoint initialPosition = sourceButton->pos();
        QPoint droped = event->position().toPoint();

        int row = ui->botTableWidget->rowAt((droped.y()-68)) ;
        int column = ui->botTableWidget->columnAt((droped.x()-590));
        bool isValid = true;
        if(sourceButton->width() == 80)
        {
            for(int i = row ; i <=row+1;i++)
            {
                for (int j = column ; j<=column+1 ;j++)
                {
                    if (i>9||i<0||j>9||j<0)
                        isValid = false;
                }
            }

            if (!isValid) {
                sourceButton->move(initialPosition);
                sourceButton->show();
                event->ignore();
                return;
            }
            else
            {
                QMediaPlayer *musicPlayer = new QMediaPlayer();
                QAudioOutput *output = new QAudioOutput();
                musicPlayer->setAudioOutput(output);
                musicPlayer->setSource(QUrl("qrc:/Radar.mp3"));
                musicPlayer->play();

                for (int i = row ; i <= row+1 ; i++)
                {
                    for (int j = column ; j<=column+1 ; j++)
                    {
                        if (botGameBoard[i][j] != 0 &&botGameBoard[i][j] !=7 && botGameBoard[i][j] != 8)
                        {

                            timer = new QTimer(this);
                            connect(timer, &QTimer::timeout, this, [this,i,j]{

                                ui->trackerButton2->hide();
                                shipFind(i,j);
                            });

                            timer->start(1000);
                        }
                    }
                }
            }
        }
        else if (sourceButton->width() == 160)
        {
            for(int i = row ; i <=row+3;i++)
            {
                for (int j = column ; j<=column+3 ;j++)
                {
                    if (i>9||i<0||j>9||j<0)
                        isValid = false;
                }
            }

            if (!isValid) {
                sourceButton->move(initialPosition);
                sourceButton->show();
                event->ignore();
                return;

            }
            else
            {
                ui->atomicZone->hide();
                Animation(row-1,column,2);
            }
           event->acceptProposedAction();
        }
    }
}
void DialogGameAI::shipFind(int row,int column)
{
    QTableWidgetItem *item = new QTableWidgetItem();
    QIcon icon(":/ic_seabattle.png");
    item->setIcon(icon);
    ui->botTableWidget->setItem(row, column, item);
}

