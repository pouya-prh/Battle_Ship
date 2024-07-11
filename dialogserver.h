#ifndef DIALOGSERVER_H
#define DIALOGSERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QDialog>
#include "user.h"
#include "arms.h"
#include <QHostAddress>
#include <QNetworkInterface>


namespace Ui {
class DialogServer;
}

class DialogServer : public QDialog
{
    Q_OBJECT

public:
    explicit DialogServer(User,QWidget *parent = nullptr);
    ~DialogServer();
    void Connected();
    QString getSystemIpAddress();
    void handleCoordinatesRecievedFromClient(int row, int column);
    void play(User,Arms,int**);
    void sendCoordinatesToClient(int,int);
    int** returnClientGameBoard();
private slots:
    void onNewConnection();
    void send2DArrayToClient(int**,int,int);
    void SetServerBoard(int**);
    void readClientData();
signals:
    void coordinatesReceivedFromClient(int,int);
    void ArrayRecievedFromClient(int**);
    void RecievedDataFromClient();
    void ServerMoved();
private:
    Ui::DialogServer *ui;
    QTcpSocket *socket;
    QTcpServer *server;
    User user;
    Arms arms;
    int** serverGameBoard;
    int** ClientGameBoard;
    //DialogClient Client;

};

#endif // DIALOGSERVER_H
