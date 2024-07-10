#ifndef DIALOGSERVERPLAY_H
#define DIALOGSERVERPLAY_H
#include "arms.h"
#include "user.h"
#include <QDialog>

namespace Ui {
class DialogServerPlay;
}

class DialogServerPlay : public QDialog
{
    Q_OBJECT

public:
    explicit DialogServerPlay(User,Arms,int**,QWidget *parent = nullptr);
    ~DialogServerPlay();

private:
    Ui::DialogServerPlay *ui;
    User user;
    Arms arms;
    int** ServerBoard;
};

#endif // DIALOGSERVERPLAY_H
