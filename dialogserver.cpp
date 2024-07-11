#include "dialogserver.h"
#include "ui_dialogserver.h"
#include  "dialogservergetam.h"
#include "dialogserversetgameboard.h"
#include "QDebug"
#include "dialogserverplay.h"
DialogServer::DialogServer(User user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogServer)
    , socket(new QTcpSocket(nullptr))
    , server(new QTcpServer(this))
    , user(user)
{
    ui->setupUi(this);
    ui->IP_label->setText("IP: " + getSystemIpAddress());
    server->listen(QHostAddress::Any,12345);
    connect(server, &QTcpServer::newConnection, this, &DialogServer::onNewConnection);

    if (!server->listen(QHostAddress::Any, 12345)) {
        qDebug() << "Server could not start!";
    } else {
        qDebug() << "Server started!";
    }

}

DialogServer::~DialogServer()
{
    delete ui;
}


void DialogServer::onNewConnection()
{
    qDebug() << "Client connected!";
    socket = server->nextPendingConnection();
    connect(socket, &QTcpSocket::readyRead, this, &DialogServer::readClientData);
    Connected();
}

void DialogServer::Connected()
{
    this->close();
    DialogServerGetAm* getArm = new DialogServerGetAm(user);
    getArm->show();
    connect(getArm,&DialogServerGetAm::ArmsSet,this,[this,getArm]()
    {
        arms = getArm->returnArms();
        DialogServerSetGameBoard* setBoard = new DialogServerSetGameBoard(user,arms);
        setBoard->show();
        connect(setBoard,&DialogServerSetGameBoard::SetGameBoardFinished,this,&DialogServer::SetServerBoard);      
    });


}

void DialogServer::SetServerBoard(int** cells)
{
    serverGameBoard = cells;
    send2DArrayToClient(serverGameBoard,10,10);
    DialogServerPlay* gamePage = new DialogServerPlay(this,user,arms,serverGameBoard);
    gamePage->setWindowTitle("Server");
    gamePage->show();
  //  connect(Client,&DialogClient::ClientMoved,this,&DialogServer::readClientData);

}
void DialogServer::sendCoordinatesToClient(int row, int column)
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
void DialogServer::readClientData()
{
    if (socket->bytesAvailable() < sizeof(int)) {
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
        emit ArrayRecievedFromClient(array);
    }
    else if (dataType == 2) {
        // Read coordinates data
        int row, column;
        in >> row >> column;
        handleCoordinatesRecievedFromClient(row,column);
    } else {
        // Unknown data type
        qDebug() << "Unknown data type received";
    }
}

void DialogServer::handleCoordinatesRecievedFromClient(int row, int column)
{
    // Push coordinates to DialogPlaytogether instance or emit a signal
    emit coordinatesReceivedFromServer(row, column);
}



QString DialogServer::getSystemIpAddress()
{
    QList<QHostAddress> addresses = QNetworkInterface::allAddresses();
    for (const QHostAddress &address : addresses)
    {
        if (address.protocol() == QAbstractSocket::IPv4Protocol && !address.isLoopback())
        {
            return address.toString();
        }
    }
    return QString();
}

void DialogServer::send2DArrayToClient(int** array, int rows, int columns) {
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
