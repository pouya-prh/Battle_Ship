#include "dialogserver.h"
#include "ui_dialogserver.h"
#include "dialoggetarm.h"
#include "QDebug"

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
DialogServer::DialogServer(QWidget *parent){}

DialogServer::~DialogServer()
{
    delete ui;
}


void DialogServer::onNewConnection()
{
    qDebug() << "Client connected!";
    socket = server->nextPendingConnection();
    connect(socket, &QTcpSocket::readyRead, this, &DialogServer::readClientData);
    connect(this, &DialogServer::cellClicked, this, &DialogServer::handleCellClicked);
    Connected();
}

void DialogServer::Connected()
{
    this->close();
    DialogGetArm* getArm = new DialogGetArm(user,21);
    getArm->show();


}
void DialogServer::handleCellClicked(int row, int column)
{
    if (socket && socket->isOpen()) {
        QByteArray data;
        QDataStream out(&data, QIODevice::WriteOnly);
        out << row << column;
        socket->write(data);
    }
}
void DialogServer::readClientData()
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (!clientSocket) {
        return;
    }

    QByteArray data = clientSocket->readAll();
    // Assuming data contains coordinates in a known format (e.g., "row,column")
    QList<QByteArray> parts = data.split(',');
    if (parts.size() == 2) {
        int row = parts[0].toInt();
        int column = parts[1].toInt();
        handleReceivedCoordinates(row, column);
    }
}

void DialogServer::handleReceivedCoordinates(int row, int column)
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
