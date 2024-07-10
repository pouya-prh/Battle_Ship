#ifndef DIALOGCHOOSE_H
#define DIALOGCHOOSE_H
#include "user.h"
#include <QDialog>

namespace Ui {
class DialogChoose;
}

class DialogChoose : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChoose(User,QWidget *parent = nullptr);
    ~DialogChoose();

private slots:


    void on_ServerButton_clicked();

    void on_ClientButton_clicked();

private:
    Ui::DialogChoose *ui;
    User user;
};

#endif // DIALOGCHOOSE_H
