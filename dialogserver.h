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
    DialogServer(QWidget *parent = nullptr);
    ~DialogServer();
    void Connected();
    QString getSystemIpAddress();
    void readClientData();
    void handleReceivedCoordinates(int row, int column);
    void play(User,Arms,int**);

private slots:
    void onNewConnection();
    void handleCellClicked(int row, int column);
signals:
    void coordinatesReceivedFromServer(int,int);
    void cellClicked(int row, int column);
private:
    Ui::DialogServer *ui;
    QTcpSocket *socket;
    QTcpServer *server;
    User user;
    Arms arms;
    int** serverGameBoard;

};

#endif // DIALOGSERVER_H
