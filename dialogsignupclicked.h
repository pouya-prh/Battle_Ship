#ifndef DIALOGSIGNUPCLICKED_H
#define DIALOGSIGNUPCLICKED_H

#include <QDialog>

namespace Ui {
class DialogSignUpClicked;
}

class DialogSignUpClicked : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSignUpClicked(QWidget *parent = nullptr);
    ~DialogSignUpClicked();
    bool check();
    void makeAccount();



signals:
    void Signup_finished(QString name,int point,int level,int drop);

private slots:
    void on_OkButton_clicked();

private:
    Ui::DialogSignUpClicked *ui;
    QString name;
    QString lastname;
    QString number;
    QString username;
    QString password;
    QString email;
    int WinCount ;
    int LoseCount;
    int drop;
    int point;
    int level;
};

#endif // DIALOGSIGNUPCLICKED_H
