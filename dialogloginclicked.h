#ifndef DIALOGLOGINCLICKED_H
#define DIALOGLOGINCLICKED_H

#include <QDialog>

namespace Ui {
class DialogLoginClicked;
}

class DialogLoginClicked : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLoginClicked(QWidget *parent = nullptr);
    ~DialogLoginClicked();
    bool CheckUser();

signals:
    void Login_finished(bool);
private slots:
    void on_OkButton_clicked();

private:
    Ui::DialogLoginClicked *ui;
    QString username;
    QString password;
};

#endif // DIALOGLOGINCLICKED_H
