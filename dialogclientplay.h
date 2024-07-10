#ifndef DIALOGCLIENTPLAY_H
#define DIALOGCLIENTPLAY_H
#include "user.h"
#include <QDialog>
#include "arms.h"
namespace Ui {
class DialogClientPlay;
}

class DialogClientPlay : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClientPlay(User,Arms,int**,QWidget *parent = nullptr);
    DialogClientPlay(QWidget *parent = nullptr);
    ~DialogClientPlay();
    void DisplayClientCells();


private:
    Ui::DialogClientPlay *ui;
    User user;
    Arms Client_Arms;
    int** Client_Cells;
};

#endif // DIALOGCLIENTPLAY_H
