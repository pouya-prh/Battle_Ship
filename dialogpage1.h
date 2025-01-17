#ifndef DIALOGPAGE1_H
#define DIALOGPAGE1_H
#include "user.h"
#include <QDialog>

namespace Ui {
class DialogPage1;
}

class DialogPage1 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPage1(User&,QWidget *parent = nullptr);
    ~DialogPage1();


private slots:


    void on_BotPushbutton_clicked();

    void on_WifiPushbutton_clicked();

    void on_FriendPushbutton_clicked();

private:
    Ui::DialogPage1 *ui;
    User user;

};

#endif // DIALOGPAGE1_H
