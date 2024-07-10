#ifndef DIALOGCLIENT_H
#define DIALOGCLIENT_H
#include <QTcpSocket>
#include <QDialog>
#include "user.h"
namespace Ui {
class DialogClient;
}

class DialogClient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClient(User,QWidget *parent = nullptr);
    DialogClient(QWidget *parent = nullptr);
    ~DialogClient();
    void Attac_to_Client(int,int,int arm = 1);
private slots:
    void onConnected();
    void sendCoordinatesToServer(int,int);
    void on_ConnectButton_clicked();
    void receiveCoordinatesFromServer();
signals:
    void cellClicked(int row, int column);
private:
    Ui::DialogClient *ui;
    QTcpSocket *socket;
    User user;
};

#endif // DIALOGCLIENT_H
