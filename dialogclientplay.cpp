#include "dialogclientplay.h"
#include "ui_dialogclientplay.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QTableWidget>
DialogClientPlay::DialogClientPlay(DialogClient* socket,User user,Arms arms,int** ClientBoard,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogClientPlay)
    ,socket(socket),
    user(user),
    arms(arms),
    ClientBoard(ClientBoard)
{
    ui->setupUi(this);
    this->user = user;
    setAcceptDrops(true);
    ui->trackerButton2->hide();
    ui->planeLabel->hide();
    ui->atomicZone->hide();
    ui->linearAttackCounter->setText(QString::number(arms.getLineAttackerCount()));
    ui->atomicBombCounter->setText(QString::number(arms.getAtomicBombCount()));
    ui->trackerCounter->setText(QString::number(arms.getTrackerCount()));
    DisplayClientBoard();
    connect(socket,&DialogClient::ArrayRecievedFromServer,this,&DialogClientPlay::DisplayClientBoard);
    connect(socket,&DialogClient::CoordinatesRecievedFromServer,this,&DialogClientPlay::AttackToClient);
    connect(ui->Server_tableWidget,&QTableWidget::cellClicked,this,&DialogClientPlay::AttackToServer);
}

DialogClientPlay::~DialogClientPlay()
{
    delete ui;
}
void DialogClientPlay::DisplayClientBoard()
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
    for(int i = 0; i <10;i++)
    {
        for(int j = 0 ; j <10;j++)
        {
            if (ClientBoard[i][j] == 11||ClientBoard[i][j] ==12||ClientBoard[i][j]==13)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship11.PNG");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if(ClientBoard[i][j] == 0)
            {
                ui->Client_TableWidget->takeItem(i,j);
            }
            else if (ClientBoard[i][j] == 21)
            {
                ship21Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship2" + QString::number(ship21Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);

            }
            else if (ClientBoard[i][j] == 22)
            {
                ship22Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship2" + QString::number(ship22Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);

            }
            else if (ClientBoard[i][j] == 23)
            {
                ship23Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship2" + QString::number(ship23Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);

            }
            else if (ClientBoard[i][j] == -21)
            {
                Vship21Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/Vship2" + QString::number(Vship21Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -22)
            {
                Vship22Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/Vship2" + QString::number(Vship22Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -23)
            {
                Vship23Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/Vship2" + QString::number(Vship23Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == 31)
            {
                ship31Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship3" + QString::number(ship31Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == 32)
            {
                ship32Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship3" + QString::number(ship32Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -31)
            {
                Vship31Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/Vship3" + QString::number(Vship31Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -32)
            {
                Vship32Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/Vship3" + QString::number(Vship32Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == 41)
            {
                ship41Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/ship4" + QString::number(ship41Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -41)
            {
                Vship41Counter++;
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/Vship4" + QString::number(Vship41Counter) + ".png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if(ClientBoard[i][j] == 7)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/mine2.png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if(ClientBoard[i][j] == 8)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/airDefense.png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if(ClientBoard[i][j] == -11)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/emptyCell.png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -210||ClientBoard[i][j] == -220||ClientBoard[i][j] == -230)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -110)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                ui->Server_tableWidget->setItem(i, j, item);
            }
            else if(ClientBoard[i][j]==-310||ClientBoard[i][j] == -320)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if (ClientBoard[i][j] == -410)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/X.png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }
            else if(ClientBoard[i][j] == -70)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon(":/meteor.png");
                item->setIcon(icon);
                ui->Client_TableWidget->setItem(i, j, item);
            }


        }
    }
}

void DialogClientPlay::DisplayServerBoard(int** ServerBoard)
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
    this->ServerBoard = ServerBoard;
    // for(int i = 0; i <10;i++)
    // {
    //     for(int j = 0 ; j <10;j++)
    //     {
    //         if (ServerBoard[i][j] == 11||ServerBoard[i][j] ==12||ServerBoard[i][j]==13)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/ship11.PNG");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if(ServerBoard[i][j] == 0)
    //         {
    //             ui->Server_tableWidget->takeItem(i,j);
    //         }
    //         else if (ServerBoard[i][j] == 21)
    //         {
    //             ship21Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/ship2" + QString::number(ship21Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);

    //         }
    //         else if (ServerBoard[i][j] == 22)
    //         {
    //             ship22Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/ship2" + QString::number(ship22Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);

    //         }
    //         else if (ServerBoard[i][j] == 23)
    //         {
    //             ship23Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/ship2" + QString::number(ship23Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);

    //         }
    //         else if (ServerBoard[i][j] == -21)
    //         {
    //             Vship21Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/Vship2" + QString::number(Vship21Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -22)
    //         {
    //             Vship22Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/Vship2" + QString::number(Vship22Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -23)
    //         {
    //             Vship23Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/Vship2" + QString::number(Vship23Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == 31)
    //         {
    //             ship31Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/ship3" + QString::number(ship31Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == 32)
    //         {
    //             ship32Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/ship3" + QString::number(ship32Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -31)
    //         {
    //             Vship31Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/Vship3" + QString::number(Vship31Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -32)
    //         {
    //             Vship32Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/Vship3" + QString::number(Vship32Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == 41)
    //         {
    //             ship41Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/ship4" + QString::number(ship41Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -41)
    //         {
    //             Vship41Counter++;
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/Vship4" + QString::number(Vship41Counter) + ".png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if(ServerBoard[i][j] == 7)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/mine2.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if(ServerBoard[i][j] == 8)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/airDefense.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if(ServerBoard[i][j] == -11)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/emptyCell.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -210||ServerBoard[i][j] == -220||ServerBoard[i][j] == -230)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/X.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -110)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/X.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if(ServerBoard[i][j]==-310||ServerBoard[i][j] == -320)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/X.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if (ServerBoard[i][j] == -410)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/X.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }
    //         else if(ServerBoard[i][j] == -70)
    //         {
    //             QTableWidgetItem *item = new QTableWidgetItem();
    //             QIcon icon(":/meteor.png");
    //             item->setIcon(icon);
    //             ui->Server_tableWidget->setItem(i, j, item);
    //         }


    //     }
    // }
}

void DialogClientPlay::AttackToClient(int i , int j)
{
    if (ClientBoard[i][j] == 0 ||ClientBoard[i][j] == 8|| ClientBoard[i][j] == -110 || ClientBoard[i][j] == -210 ||
        ClientBoard[i][j] == -220 || ClientBoard[i][j] == -230 || ClientBoard[i][j] == -310 ||
        ClientBoard[i][j] == -320|| ClientBoard[i][j] == -410 || ClientBoard[i][j] == 5){
        ClientBoard[i][j] = -11 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Miss.mp3"));
        musicPlayer->play();
    }
    else if ( ClientBoard[i][j] == 11|| ClientBoard[i][j] == 12||ClientBoard[i][j] == 13) {
        ClientBoard[i][j] = -110 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        //makeEmptyAround(ClientBoard,-110);
    }
    else if ( ClientBoard[i][j] == 21 ){
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        ClientBoard[i][j] = -210 ;
        // botDestroyedShip21++ ;
        // if ( botDestroyedShip21 == 2 ){
        //     makeEmptyAround(cells,-210);
        // }


    }

    else if ( ClientBoard[i][j] == 22 ){
        ClientBoard[i][j] = -220 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        // userDestroyedShip22++ ;
        // if ( userDestroyedShip22 == 2 ){
        //     makeEmptyAround(cells,-220);
        // }

    }

    else if ( ClientBoard[i][j] == 23 ){
        ClientBoard[i][j] = -230 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        // userDestroyedShip23++ ;
        // if ( userDestroyedShip21 == 2 ){
        //     makeEmptyAround(cells,-230);
        // }

    }

    else if ( ClientBoard[i][j] == 31 ){
        ClientBoard[i][j] = -310 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        // userDestroyedShip31++ ;
        // if ( userDestroyedShip31 == 3 ){
        //     makeEmptyAround(cells,-310);
        // }

    }

    else if ( ClientBoard[i][j] == 32 ){
        ClientBoard[i][j] = -320 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        // userDestroyedShip32++ ;
        // if ( userDestroyedShip32 == 3 ){
        //     makeEmptyAround(cells,-320);
        // }

    }


    else if ( ClientBoard[i][j] == 41 ){
        ClientBoard[i][j] = -410 ;
        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        // userDestroyedShip4++ ;
        // if ( userDestroyedShip4 == 4 ){
        //     makeEmptyAround(cells,-410);
        // }

    }

    else if (ClientBoard[i][j] == 7 ){

        QMediaPlayer *musicPlayer = new QMediaPlayer();
        QAudioOutput *output = new QAudioOutput();
        musicPlayer->setAudioOutput(output);
        musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
        musicPlayer->play();
        ClientBoard[i][j] = -70 ;
    }
    DisplayClientBoard();
}

void DialogClientPlay::AttackToServer(int i , int j)
{
    socket->sendCoordinatesToServer(i , j);

    // if (ServerBoard[i][j] == 0 ||ServerBoard[i][j] == 8|| ServerBoard[i][j] == -110 || ServerBoard[i][j] == -210 ||
    //     ServerBoard[i][j] == -220 || ServerBoard[i][j] == -230 || ServerBoard[i][j] == -310 ||
    //     ServerBoard[i][j] == -320|| ServerBoard[i][j] == -410|| ServerBoard[i][j] == 5){
    //     ServerBoard[i][j] = -11 ;
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Miss.mp3"));
    //     musicPlayer->play();
    // }
    // else if ( ServerBoard[i][j] == 11|| ServerBoard[i][j] == 12||ServerBoard[i][j] == 13) {
    //     ServerBoard[i][j] = -110 ;
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     //makeEmptyAround(ClientBoard,-110);
    // }
    // else if ( ServerBoard[i][j] == 21 ){
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     ServerBoard[i][j] = -210 ;
    //     // botDestroyedShip21++ ;
    //     // if ( botDestroyedShip21 == 2 ){
    //     //     makeEmptyAround(cells,-210);
    //     // }


    // }

    // else if ( ServerBoard[i][j] == 22 ){
    //     ServerBoard[i][j] = -220 ;
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     // userDestroyedShip22++ ;
    //     // if ( userDestroyedShip22 == 2 ){
    //     //     makeEmptyAround(cells,-220);
    //     // }

    // }

    // else if ( ServerBoard[i][j] == 23 ){
    //     ServerBoard[i][j] = -230 ;
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     // userDestroyedShip23++ ;
    //     // if ( userDestroyedShip21 == 2 ){
    //     //     makeEmptyAround(cells,-230);
    //     // }

    // }

    // else if ( ServerBoard[i][j] == 31 ){
    //     ServerBoard[i][j] = -310 ;
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     // userDestroyedShip31++ ;
    //     // if ( userDestroyedShip31 == 3 ){
    //     //     makeEmptyAround(cells,-310);
    //     // }

    // }

    // else if ( ServerBoard[i][j] == 32 ){
    //     ServerBoard[i][j] = -320 ;
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     // userDestroyedShip32++ ;
    //     // if ( userDestroyedShip32 == 3 ){
    //     //     makeEmptyAround(cells,-320);
    //     // }

    // }


    // else if ( ServerBoard[i][j] == 41 ){
    //     ServerBoard[i][j] = -410 ;
    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     // userDestroyedShip4++ ;
    //     // if ( userDestroyedShip4 == 4 ){
    //     //     makeEmptyAround(cells,-410);
    //     // }

    // }

    // else if (ServerBoard[i][j] == 7 ){

    //     QMediaPlayer *musicPlayer = new QMediaPlayer();
    //     QAudioOutput *output = new QAudioOutput();
    //     musicPlayer->setAudioOutput(output);
    //     musicPlayer->setSource(QUrl("qrc:/Hit.mp3"));
    //     musicPlayer->play();
    //     ServerBoard[i][j] = -70 ;
    // }
    // DisplayServerBoard(ServerBoard);
}
