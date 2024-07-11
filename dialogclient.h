#ifndef DIALOGCLIENT_H
#define DIALOGCLIENT_H
#include <QDialog>
#include "user.h"
#include "arms.h"
#include <QTcpSocket>
namespace Ui {
class DialogClient;
}

class DialogClient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClient(User,QWidget *parent = nullptr);
    //DialogClient(QWidget *parent = nullptr);
    ~DialogClient();
    void readServerData() ;
    void sendCoordinatesToServer(int,int);
private slots:
    void onConnected();
    void send2DArrayToServer(int**,int,int);
    void on_ConnectButton_clicked();
    void SetClientBoard(int**);
signals:
    void ClientMoved();
    void CoordinatesRecievedFromServer(int,int);
    void ArrayRecievedFromServer(int**);
private:
    Ui::DialogClient *ui;
    QTcpSocket *socket;
    User user;
    Arms arms;
    int** ClientBoard;
    //DialogServer Server;
};

#endif // DIALOGCLIENT_H
