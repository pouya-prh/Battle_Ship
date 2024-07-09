#include "dialogondevice.h"
#include "ui_dialogondevice.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QTimer>
#include <QThread>
#include <QPropertyAnimation>
#include "dialogwon.h"
#include "fstream"
#include "user.h"
DialogOnDevice::DialogOnDevice(Arms player1, Arms player2,int** player1_cells,int** player2_cells,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogOnDevice)
{
    ui->setupUi(this);
    setAcceptDrops(true);
    this->player1_cells = player1_cells;
    this->player2_cells = player2_cells;
    this->player1_arms = player1;
    this->player2_arms = player2;
    ui->planeLabel1->hide();
    ui->planeLabel2->hide();
    ui->trackerButton1_D->hide();
    ui->trackerButton2_D->hide();
    ui->atomicZone1->hide();
    ui->atomicZone2->hide();
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
    ui->AtomicBombCounter1->setText(QString::number(player1_arms.getAtomicBombCount()));
    ui->AtomicBombCounter2->setText(QString::number(player2_arms.getAtomicBombCount()));
    ui->linearAttackCounter1->setText(QString::number(player1_arms.getLineAttackerCount()));
    ui->linearAttackCounter2->setText(QString::number(player2_arms.getLineAttackerCount()));
    ui->tracker1_Counter->setText(QString::number(player1_arms.getTrackerCount()));
    ui->tracker2_Counter->setText(QString::number(player2_arms.getTrackerCount()));
    turn = 1;

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
            else if (cells[i][j] == -100)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/fire.png");
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
            else
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon("");
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
    {
        Attack(player2_cells,row,column);

    }
    else if(arm == 1)
    {
        bool isDefense = false;
        for(int j = 9 ; j >= 0 ; j--)
        {
            if (player2_cells[row][j] == 8)
            {
                player2_cells[column][j] = 0;
                isDefense = true;
            }
        }
        if(!isDefense)
        {
            for(int j = 9 ; j >=0 ; j--)
            {
                if(player2_cells[row][j] == 11||player2_cells[row][j] ==12||player2_cells[row][j] == 13 ||player2_cells[row][j] == 21||player2_cells[row][j] == 22 )
                {
                    Attack(player2_cells,row,j);

                    if (turn %2 == 0)
                    {
                        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    else
                    {
                        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    turn ++;
                    break;
                }
                if(player2_cells[row][j] == 23 || player2_cells[row][j] == 31 || player2_cells[row][j] == 32 || player2_cells[row][j] == 41 || player2_cells[row][j] == 7)
                {
                    Attack(player2_cells,row,j);

                    if (turn %2 == 0)
                    {
                        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    else
                    {
                        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    turn ++;
                    break;
                }
                Attack(player2_cells,row,j);
                turn ++;
                if(j == 0)
                {

                    if (turn %2 == 0)
                    {
                        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    else
                    {
                        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    turn ++;
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
        musicPlayer->play();
        for(int i = row ; i< row +4 ; i++)
        {
            for (int j = column ; j < column+4 ; j++)
            {
                player2_cells[i][j] = -100;
            }

        }

        if (turn %2 == 0)
        {
            ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
        else
        {
            ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
        Display(player2_cells);
        turn ++;
        if (turn %2 == 0)
        {
            ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
        else
        {
            ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
    }


}
void DialogOnDevice::player2_Play(int row , int column , int arm)
{
    if (arm == 0&&turn%2 == 0)
    {
        Attack(player1_cells,row,column);

    }
    else if(arm == 1)
    {
        bool isDefense = false;
        for(int j = 9 ; j >= 0 ; j--)
        {
            if (player1_cells[row][j] == 8)
            {
                player1_cells[column][j] = 0;
                isDefense = true;
            }
        }
        if(!isDefense)
        {
            for(int j = 9 ; j >=0 ; j--)
            {
                if(player1_cells[row][j] == 11||player1_cells[row][j] ==12||player1_cells[row][j] == 13 ||player1_cells[row][j] == 21||player1_cells[row][j] == 22 )
                {
                    Attack(player1_cells,row,j);

                    if (turn %2 == 0)
                    {
                        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    else
                    {
                        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    turn ++;
                    break;
                }
                if(player1_cells[row][j] == 23 || player1_cells[row][j] == 31 || player1_cells[row][j] == 32 || player1_cells[row][j] == 41 || player1_cells[row][j] == 7)
                {
                     Attack(player1_cells,row,j);
                     turn ++;
                      if (turn %2 == 0)
                    {
                        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    else
                    {
                        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }

                    break;
                }
                Attack(player1_cells,row,j);
                turn ++;
                if(j == 0)
                {
                     turn ++;
                    if (turn %2 == 0)
                    {
                        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }
                    else
                    {
                        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
                    }


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
        musicPlayer->play();
        for(int i = row ; i< row +4 ; i++)
        {
            for (int j = column ; j < column+4 ; j++)
            {
                player1_cells[i][j] = -100;
            }

        }

        if (turn %2 == 0)
        {
            ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
        else
        {
            ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }

        Display(player1_cells);
        turn ++;
        if (turn %2 == 0)
        {
            ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
        else
        {
            ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
    }


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
        if (turn %2 == 0)
        {
            Display(player1_cells);
        }
        else
        {
            Display(player2_cells);
        }


        if (turn %2 == 0)
        {
            ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
        else
        {
            ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                         "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
        }
        turn++;
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
        if(turn%2 != 0)
        {
            player1_Play(i,j,0);
        }
        else
        {
            player2_Play(i,j,0);
        }
    }

    if (turn %2 == 0)
    {
        Display(player1_cells);
    }
    else
    {
        Display(player2_cells);
    }


    if (turn %2 == 0)
    {
        ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
    }
    else
    {
        ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                     "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
    }
    WonOrLost();

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

void DialogOnDevice::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {
        QWidget *sourceWidget = qobject_cast<QWidget *>(event->source());
        if (sourceWidget) {
            sourceWidget->hide();
        }

        event->acceptProposedAction();
    }
}

void DialogOnDevice::dragMoveEvent(QDragMoveEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {
        event->acceptProposedAction();
    }
}
void DialogOnDevice::dropEvent(QDropEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {

        DraggableButton *sourceButton = qobject_cast<DraggableButton*>(event->source());
        QByteArray itemData = event->mimeData()->data("application/x-ship");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPoint initialPosition = sourceButton->pos();
        QPoint droped = event->position().toPoint();
        int row , column;
        if(turn % 2 == 0)
        {
            row = ui->player1_table->rowAt((droped.y()-68)) ;
            column = ui->player1_table->columnAt((droped.x()-50));
        }
        else
        {
            row = ui->player2_table->rowAt((droped.y()-68)) ;
            column = ui->player2_table->columnAt((droped.x()-590));
        }
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
            QMediaPlayer *musicPlayer = new QMediaPlayer();
            QAudioOutput *output = new QAudioOutput();
            musicPlayer->setAudioOutput(output);
            musicPlayer->setSource(QUrl("qrc:/Radar.mp3"));
            musicPlayer->play();
            if (turn %2 == 0)
            {
                for (int i = row ; i <= row+1 ; i++)
                {
                    for (int j = column ; j<=column+1 ; j++)
                    {
                        if (player1_cells[i][j] == 11 ||player1_cells[i][j] ==12 || player1_cells[i][j] == 13||player1_cells[i][j] == 21 ||player1_cells[i][j] ==22 || player1_cells[i][j] == 23||
                            player1_cells[i][j] == 31 ||player1_cells[i][j] ==32 || player1_cells[i][j] == 33||player1_cells[i][j] == -21||player1_cells[i][j] == -22||player1_cells[i][j] == -23||
                            player1_cells[i][j] == -31||player1_cells[i][j] == -32||player1_cells[i][j] == -41)
                        {

                            QTimer* timer = new QTimer(this);
                            connect(timer, &QTimer::timeout, this, [this,i,j]{

                                ui->trackerButton2_D->hide();
                                QTableWidgetItem *item = new QTableWidgetItem();
                                QIcon icon(":/ic_seabattle.png");
                                item->setIcon(icon);
                                ui->player1_table->setItem(i, j, item);

                            });

                            timer->start(1000);
                        }
                    }
                }
            }
            else
            {
                for (int i = row ; i <= row+1 ; i++)
                {
                    for (int j = column ; j<=column+1 ; j++)
                    {
                        if (player2_cells[i][j] == 11 ||player2_cells[i][j] ==12 || player2_cells[i][j] == 13 || player2_cells[i][j] == 21||
                            player2_cells[i][j] == 22|| player2_cells[i][j] == 23|| player2_cells[i][j] == 32|| player2_cells[i][j] == 41
                            ||player2_cells[i][j] == -21||player2_cells[i][j] == -22||player2_cells[i][j] == -23||player2_cells[i][j] == -31||player2_cells[i][j] == -32||player2_cells[i][j] == -41)
                        {

                            QTimer* timer = new QTimer(this);
                            connect(timer, &QTimer::timeout, this, [this,i,j]{

                                ui->trackerButton1_D->hide();
                                QTableWidgetItem *item = new QTableWidgetItem();
                                QIcon icon(":/ic_seabattle.png");
                                item->setIcon(icon);
                                ui->player2_table->setItem(i, j, item);

                            });

                            timer->start(1000);
                        }
                    }
                }
            }
            turn++;
            if (turn %2 == 0)
            {
                ui->turnLabel->setStyleSheet("image:url(:/Recommended Source Files/Recommended Source Files/Images/flesh.png);"
                                             "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
            }
            else
            {
                ui->turnLabel->setStyleSheet("image: url(:/Recommended Source Files/Recommended Source Files/Images/fleshP.png);"
                                             "background-image: url(:/Recommended Source Files/Recommended Source Files/Images/WhiteBackG.png);");
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
            if(turn % 2 == 0)
            {
                ui->atomicZone2->hide();
                Animation(row-1,column-1,2);
            }
            else
            {
                ui->atomicZone2->hide();
                Animation(row-1,column,2);
            }
            event->acceptProposedAction();
        }
    }
}

void DialogOnDevice::Animation(int row,int column,int which)
{

    QMediaPlayer* musicPlayer = new QMediaPlayer();
    QAudioOutput* output = new QAudioOutput();
    musicPlayer->setAudioOutput(output);
    musicPlayer->setSource(QUrl("qrc:/Plane.mp3"));
    musicPlayer->play();

    if(turn %2 == 0)
    {
        ui->planeLabel2->show();
        QPropertyAnimation *animation = new QPropertyAnimation(ui->planeLabel2, "geometry");
        animation->setDuration(3000);
        int mouseX = QCursor::pos().x();
        int labelWidth = ui->planeLabel2->width();
        int labelHeight = ui->planeLabel2->height();
        int endY = this->height();
        //int endX = this->width();
        animation->setStartValue(QRect(mouseX+500, 0, labelWidth, labelHeight));
        animation->setEndValue(QRect(0,endY-100 , labelWidth, labelHeight));

        connect(animation, &QPropertyAnimation::finished, this, [this,row, column,which]()
                {
                    ui->planeLabel2->hide();
                    if(which == 1) {

                        player2_Play(row,column,1);
                    }
                    else
                    {

                        player2_Play(row,column,2);
                    }

                });

        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
    else
    {
        ui->planeLabel1->show();
        QPropertyAnimation *animation = new QPropertyAnimation(ui->planeLabel1, "geometry");
        animation->setDuration(3000);
        int mouseX = QCursor::pos().x();
        int labelWidth = ui->planeLabel1->width();
        int labelHeight = ui->planeLabel1->height();
        int endY = this->height();
        int endX = this->width();
        animation->setStartValue(QRect(mouseX-800, 0, labelWidth, labelHeight));
        animation->setEndValue(QRect(endX,endY-100 , labelWidth, labelHeight));

        connect(animation, &QPropertyAnimation::finished, this, [this,row, column,which]()
                {
                    ui->planeLabel2->hide();
                    if(which == 1) {

                        player1_Play(row,column,1);
                    }
                    else
                    {

                        player1_Play(row,column,2);
                    }

                });

        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
}

void DialogOnDevice::on_linearAttack1_clicked()
{
    if (player1_arms.getLineAttackerCount()>0&& turn%2 != 0)
    {
        player1_arms.linearAttackMinus();
        ui->linearAttackCounter1->setText(QString::number(player1_arms.getLineAttackerCount()));
        disconnect  (ui->player2_table,&QTableWidget::cellClicked,this,nullptr);
        connect(ui->player2_table, &QTableWidget::cellClicked, this, [this](int row, int column) {
            Animation(row,column,1);
            disconnect(ui->player2_table,&QTableWidget::cellClicked,nullptr,nullptr);

            connect(ui->player2_table, &QTableWidget::cellClicked, this, [this](int row,int column){
                player1_Play(row, column, 0);
            });

        });
    }
}


void DialogOnDevice::on_linearAttackbutton2_clicked()
{
    if (player2_arms.getLineAttackerCount()>0&& turn%2 == 0)
    {


        player2_arms.linearAttackMinus();
        ui->linearAttackCounter2->setText(QString::number(player2_arms.getLineAttackerCount()));
        disconnect  (ui->player1_table,&QTableWidget::cellClicked,this,nullptr);
        connect(ui->player1_table, &QTableWidget::cellClicked, this, [this](int row, int column) {
            Animation(row,column,1);
            disconnect(ui->player1_table,&QTableWidget::cellClicked,nullptr,nullptr);

            connect(ui->player1_table, &QTableWidget::cellClicked, this, [this](int row,int column){
                player2_Play(row, column, 0);
            });

        });
    }
}


void DialogOnDevice::on_atomicBomb1_clicked()
{
    if (player1_arms.getAtomicBombCount()>0&&turn%2 != 0)
    {
        player1_arms.atomicBombMinus();
        ui->AtomicBombCounter1->setText(QString::number(player1_arms.getAtomicBombCount()));
        ui->atomicZone1->show();
    }
}


void DialogOnDevice::on_atomicBomb2_clicked()
{
    if (player2_arms.getAtomicBombCount()>0&&turn%2 == 0)
    {
        player2_arms.atomicBombMinus();
        ui->AtomicBombCounter2->setText(QString::number(player2_arms.getAtomicBombCount()));
        ui->atomicZone2->show();
    }
}


void DialogOnDevice::on_trackerButton1_clicked()
{
    if (player1_arms.getTrackerCount()>0&&turn%2 !=0)
    {
        ui->trackerButton1_D->show();
        player1_arms.trackerMinus();
        ui->tracker1_Counter->setText(QString::number(player1_arms.getTrackerCount()));

    }
}


void DialogOnDevice::on_trackerButton2_clicked()
{
    if (player2_arms.getTrackerCount()>0&& turn%2 == 0)
    {
        ui->trackerButton2_D->show();
        player2_arms.trackerMinus();
        ui->tracker2_Counter->setText(QString::number(player2_arms.getTrackerCount()));

    }
}
void DialogOnDevice::WonOrLost()
{
    bool player1Won = true;
    bool player2Won = true;

    for (int i = 0 ; i < 10 ;i++)
    {
        if (!player2Won)
            break;
        for (int j = 0 ; j <10 ; j++)
        {
            if (player1_cells[i][j] == 11 || player1_cells[i][j] == 12 ||player1_cells[i][j] == 13 ||player1_cells[i][j] == 21
                ||player1_cells[i][j] == 22||player1_cells[i][j] == 23 ||player1_cells[i][j] == 31||player1_cells[i][j] == 32||player1_cells[i][j] == 41)
            {
                player2Won = false;
                break;
            }
            if (player1_cells[i][j] == -21||player1_cells[i][j] == -22||player1_cells[i][j] == -23 ||player1_cells[i][j] == -31||player1_cells[i][j] == -32||player1_cells[i][j] == -41)
            {
                player2Won = false;
                break;
            }
        }
    }
    if (player2Won)
    {
        this->close();
        std::ifstream playerAccount("playerAccount.bin",std::ios::in);
        User user;
        playerAccount.read(reinterpret_cast<char*>(&user),sizeof(user));
        DialogWon* lostPage = new DialogWon(user);
        lostPage->show();
    }
    for (int i = 0 ; i < 10 ;i++)
    {
        for (int j = 0 ; j <10 ; j++)
        {
            if (!player1Won)
                break;
            if (player2_cells[i][j] == 11 || player2_cells[i][j] == 12 ||player2_cells[i][j] == 13 ||player2_cells[i][j] == 21
                ||player2_cells[i][j] == 22||player2_cells[i][j] == 23 ||player2_cells[i][j] == 31||player2_cells[i][j] == 32||player2_cells[i][j] == 41)
            {
                player1Won = false;
                break;
            }
            if (player2_cells[i][j] == -21||player2_cells[i][j] == -22||player2_cells[i][j] == -23 ||player2_cells[i][j] == -31||player2_cells[i][j] == -32||player2_cells[i][j] == -41)
            {
                player1Won = false;
                break;
            }
        }
    }
    if (player1Won)
    {
        this->close();
        std::ifstream playerAccount("playerAccount.bin",std::ios::in);
        User user;
        playerAccount.read(reinterpret_cast<char*>(&user),sizeof(user));
        this->close();
        DialogWon* wonPage = new DialogWon(user);
        wonPage->show();
    }
}
