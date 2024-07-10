#include "dialogclient.h"
#include "ui_dialogclient.h"
#include "dialoggetarm.h"
DialogClient::DialogClient(User user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogClient)
    ,socket(new QTcpSocket(this))
    ,user(user)
{
    ui->setupUi(this);

}
DialogClient::DialogClient(QWidget *parent){}
DialogClient::~DialogClient()
{
    delete ui;
}

void DialogClient::onConnected()
{
    connect(this, &DialogClient::cellClicked, this, &DialogClient::sendCoordinatesToServer);
    DialogGetArm* getArm = new DialogGetArm(user,22);
    getArm->show();
}
void DialogClient::on_ConnectButton_clicked()
{
    QString ip = ui->IP_lineEdit->text();
    socket->connectToHost(ip, 12345);
    connect(socket, &QTcpSocket::connected, this, &DialogClient::onConnected);
}
void DialogClient::sendCoordinatesToServer(int row, int column)
{
    QString data = QString::number(row) + "," + QString::number(column);
    socket->write(data.toUtf8());
}
void DialogClient::receiveCoordinatesFromServer()
{
    while (socket->canReadLine()) {
        QString line = socket->readLine().trimmed();
        QStringList coordinates = line.split(",");
        if (coordinates.size() == 2) {
            int row = coordinates[0].toInt();
            int column = coordinates[1].toInt();
            Attac_to_Client(row,column);
        }
    }
}
void DialogClient::Attac_to_Client(int row,int column,int arm)
{
    return;
}


