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
    QByteArray serialize2DArray(int**,int,int);
    int** deserialize2DArray(const QByteArray&, int&, int&);
    void readServerData() ;
    int** handleArrayRecievedFromServer(int**);
    int* handleCoordinatesRecievedFromServer(int,int);
private slots:
    void onConnected();
    void sendCoordinatesToServer(int,int);
    void send2DArrayToServer(int**,int,int);
    void on_ConnectButton_clicked();
    void SetClientBoard(int**);
signals:
    void ClientMoved();
private:
    Ui::DialogClient *ui;
    QTcpSocket *socket;
    User user;
    Arms arms;
    int** ClientBoard;
    //DialogServer Server;
};

#endif // DIALOGCLIENT_H
