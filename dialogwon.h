#ifndef DIALOGWON_H
#define DIALOGWON_H
#include "user.h"
#include <QDialog>

namespace Ui {
class DialogWon;
}

class DialogWon : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWon(User&,QWidget *parent = nullptr);
    DialogWon(User&,QString,QWidget *parent = nullptr);
    ~DialogWon();

private slots:
    void on_backButton_clicked();

private:
    Ui::DialogWon *ui;
    User user;
};

#endif // DIALOGWON_H
