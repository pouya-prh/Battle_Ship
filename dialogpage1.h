#ifndef DIALOGPAGE1_H
#define DIALOGPAGE1_H

#include <QDialog>

namespace Ui {
class DialogPage1;
}

class DialogPage1 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPage1(QString username,int point,int level,int drop,QWidget *parent = nullptr);
    ~DialogPage1();


private slots:


    void on_BotPushbutton_clicked();

private:
    Ui::DialogPage1 *ui;

};

#endif // DIALOGPAGE1_H
