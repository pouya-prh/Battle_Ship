#include "dialogclient.h"
#include "ui_dialogclient.h"
#include "dialogclientplay.h"
#include "dialogservergetam.h"
#include "dialogserversetgameboard.h"
DialogClient::DialogClient(User user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogClient)
    ,socket(new QTcpSocket(this))
    ,user(user)
{
    ui->setupUi(this);
    connect(socket,&QTcpSocket::connected,this,&DialogClient::onConnected);
}

DialogClient::~DialogClient()
{
    delete ui;
}

void DialogClient::onConnected()
{
    this->close();
    DialogServerGetAm* getArm = new DialogServerGetAm(user);
    getArm->show();
    connect(getArm,&DialogServerGetAm::ArmsSet,this,[this,getArm]()
            {
                arms = getArm->returnArms();
                DialogServerSetGameBoard* setBoard = new DialogServerSetGameBoard(user,arms);
                setBoard->show();
                connect(setBoard,&DialogServerSetGameBoard::SetGameBoardFinished,this,&DialogClient::SetClientBoard);
            });

}
int** DialogClient::returnServerGameBoard()
{
    return ServerGameBoard;
}
void DialogClient::on_ConnectButton_clicked()
{
    QString ip = ui->IP_lineEdit->text();
    socket->connectToHost(ip, 12345);
}
void DialogClient::sendCoordinatesToServer(int row, int column)
{
    if (!socket) {
        qDebug() << "No client connected";
        return;
    }
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out << static_cast<int>(2); // DataType: 2 for coordinates
    out << row << column;
    socket->write(block);
}

void DialogClient::SetClientBoard(int** cells)
{
    connect(socket,&QTcpSocket::readyRead,this,&DialogClient::readServerData);
    ClientBoard = cells;
    send2DArrayToServer(ClientBoard,10,10);
    DialogClientPlay* gamePage = new DialogClientPlay(this,user,arms,ClientBoard);
    gamePage->setWindowTitle("Client");
    gamePage->show();
}

void DialogClient::send2DArrayToServer(int** array, int rows, int columns) {
    if (!socket) {
        qDebug() << "No client connected";
        return;
    }
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out << static_cast<int>(1); // DataType: 1 for 2D array
    out << rows << columns;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            out << array[i][j];
        }
    }
    socket->write(block);
}

void DialogClient::readServerData() {
    if (!socket) {
        return; // Wait until enough data is available
    }
    QDataStream in(socket);
    int dataType;
    in >> dataType;

    if (dataType == 1) {
        // Read 2D array data
        int rows, columns;
        in >> rows >> columns;
        int** array = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            array[i] = new int[columns];
            for (int j = 0; j < columns; ++j) {
                in >> array[i][j];
            }
        }
        ServerGameBoard = array;
        emit ArrayRecievedFromServer(array);
    }
    else if (dataType == 2) {
        // Read coordinates data
        int row, column;
        in >> row >> column;
        emit CoordinatesRecievedFromServer(row,column);
    } else {
        // Unknown data type
        qDebug() << "Unknown data type received";
    }
}
