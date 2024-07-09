#include "dialogondevice.h"
#include "ui_dialogondevice.h"
#include <QMediaPlayer>
#include <QAudioOutput>
DialogOnDevice::DialogOnDevice(Arms player1, Arms player2,int** player1_cells,int** player2_cells,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogOnDevice)
{
    ui->setupUi(this);
    player1DestroyedShip21 = 0;
    player1DestroyedShip22 = 0;
    player1DestroyedShip23 = 0;
    player1DestroyedShip31 = 0;
    player1DestroyedShip32 = 0;
    player1DestroyedShip4 = 0;
    player2DestroyedShip21 = 0;
    player2DestroyedShip22 = 0;
    player2DestroyedShip23 = 0;
    player2DestroyedShip31 = 0;
    player2DestroyedShip32 = 0;
    player2DestroyedShip4 = 0;
    turn = 1;
    this->player1_cells = player1_cells;
    this->player2_cells = player2_cells;
    connect(ui->player1_table, &QTableWidget::cellClicked, this, [this](int row,int column){
        player2_Play(row,column,0);
    });
    connect(ui->player2_table, &QTableWidget::cellClicked, this, [this](int row,int column){
        player1_Play(row,column,0);
    });
}

DialogOnDevice::~DialogOnDevice()
{
    delete ui;
}

void DialogOnDevice::Display(int** cells)
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
                if (turn %2 == 0)
                {
                    ui->player1_table->setItem(i, j, item);
                }
                else
                {
                     ui->player2_table->setItem(i, j, item);
                }
            }
            else if (cells[i][j] == -210||cells[i][j] == -220||cells[i][j] == -230)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                if (turn %2 == 0)
                {
                    ui->player1_table->setItem(i, j, item);
                }
                else
                {
                    ui->player2_table->setItem(i, j, item);
                }
            }
            else if (cells[i][j] == -110)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                if (turn %2 == 0)
                {
                    ui->player1_table->setItem(i, j, item);
                }
                else
                {
                    ui->player2_table->setItem(i, j, item);
                }
            }
            else if(cells[i][j]==-310||cells[i][j] == -320)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                if (turn %2 == 0)
                {
                    ui->player1_table->setItem(i, j, item);
                }
                else
                {
                    ui->player2_table->setItem(i, j, item);
                }
            }
            else if (cells[i][j] == -410)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                if (turn %2 == 0)
                {
                    ui->player1_table->setItem(i, j, item);
                }
                else
                {
                    ui->player2_table->setItem(i, j, item);
                }
            }
            else if(cells[i][j] == -70)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/meteor.png");
                item->setIcon(icon);
                if (turn %2 == 0)
                {
                    ui->player1_table->setItem(i, j, item);
                }
                else
                {
                    ui->player2_table->setItem(i, j, item);
                }
            }


        }
    }
}

void DialogOnDevice::player1_Play(int row , int column , int arm)
{
    if (arm == 0&&turn%2 !=0)
       Attack(player2_cells,row,column);


}
void DialogOnDevice::player2_Play(int row , int column , int arm)
{
    if (arm == 0&&turn%2 == 0)
       Attack(player1_cells,row,column);

}

void DialogOnDevice::Attack(int** cells,int i , int j )
{
    if (cells[i][j] == 0 ||cells[i][j] == 8|| cells[i][j] == -110 || cells[i][j] == -210 ||cells[i][j] == -220 ||
        cells[i][j] == -230 || cells[i][j] == -310 || cells[i][j] == -320|| cells[i][j] == -410||cells[i][j] == 5){
        cells[i][j] = -11 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Miss.mp3"));
        musicPlayer->play();
        if (turn%2 == 0)
            Display(player1_cells);
        else
            Display(player2_cells);
        turn++;
        return;
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
    else if ( cells[i][j] == 21 ||  cells[i][j] == -21 ){
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        cells[i][j] = -210 ;
        if (turn %2 == 0)
        {
            player2DestroyedShip21++;
            if (player2DestroyedShip21 == 2)
                makeEmptyAround(player1_cells,-210);
        }
        else
        {
            player1DestroyedShip21++;
            if(player1DestroyedShip21 == 2)
                makeEmptyAround(player2_cells,-210);
        }
    }

    else if ( cells[i][j] == 22 ||  cells[i][j] == -22){
        cells[i][j] = -220 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if (turn %2 == 0)
        {
            player2DestroyedShip22++;
            if (player2DestroyedShip22 == 2)
                makeEmptyAround(player1_cells,-220);
        }
        else
        {
            player1DestroyedShip22++;
            if(player1DestroyedShip22 == 2)
                makeEmptyAround(player2_cells,-220);
        }
    }

    else if ( cells[i][j] == 23 ||  cells[i][j] == -23 ){
        cells[i][j] = -230 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if (turn %2 == 0)
        {
            player2DestroyedShip23++;
            if (player2DestroyedShip23 == 2)
                makeEmptyAround(player1_cells,-230);
        }
        else
        {
            player1DestroyedShip23++;
            if(player1DestroyedShip23 == 2)
                makeEmptyAround(player2_cells,-230);
        }
    }

    else if ( cells[i][j] == 31  ||  cells[i][j] == -31){
        cells[i][j] = -310 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if (turn %2 == 0)
        {
            player2DestroyedShip31++;
            if (player2DestroyedShip31 == 3)
                makeEmptyAround(player1_cells,-310);
        }
        else
        {
            player1DestroyedShip31++;
            if(player1DestroyedShip31 == 3)
                makeEmptyAround(player2_cells,-310);
        }
    }

    else if ( cells[i][j] == 32||  cells[i][j] == -32 ){
        cells[i][j] = -320 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if (turn %2 == 0)
        {
            player2DestroyedShip32++;
            if (player2DestroyedShip32 == 3)
                makeEmptyAround(player1_cells,-320);
        }
        else
        {
            player1DestroyedShip32++;
            if(player1DestroyedShip32 == 3)
                makeEmptyAround(player2_cells,-320);
        }
    }


    else if ( cells[i][j] == 41 ||  cells[i][j] == -41){
        cells[i][j] = -410 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        if (turn %2 == 0)
        {
            player2DestroyedShip4++;
            if (player2DestroyedShip4 == 4)
                makeEmptyAround(player1_cells,-410);
        }
        else
        {
            player1DestroyedShip4++;
            if(player1DestroyedShip4 == 4)
                makeEmptyAround(player2_cells,-410);
        }
    }

    else if (cells[i][j] == 7 ){

        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        cells[i][j] = -70 ;
        if(turn%2 == 0)
        {
            player1_Play(i,j,0);
        }
        else
        {
            player2_Play(i,j,0);
        }
    }
    if (turn%2 == 0)
        Display(player1_cells);
    else
        Display(player2_cells);

}
void DialogOnDevice::makeEmptyAround(int** cells,int value)
{
    for ( int x = 0 ; x <= 9 ; x++ ){
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
