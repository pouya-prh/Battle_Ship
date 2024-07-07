#ifndef DIALOGGAMEAI_H
#define DIALOGGAMEAI_H
#include "arms.h"
#include <QDialog>
#include "user.h"
namespace Ui {
class DialogGameAI;
}

class DialogGameAI : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGameAI(User&,Arms&,int**,QWidget *parent = nullptr);
    ~DialogGameAI();
    int** makeGameBoard();
    User& user;
    Arms& arms;
    int** botGameBoard;
private:
    Ui::DialogGameAI *ui;
};

#endif // DIALOGGAMEAI_H
