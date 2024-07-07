#ifndef DIALOGGAMEAI_H
#define DIALOGGAMEAI_H

#include <QDialog>

namespace Ui {
class DialogGameAI;
}

class DialogGameAI : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGameAI(int**,QWidget *parent = nullptr);
    ~DialogGameAI();

private:
    Ui::DialogGameAI *ui;
};

#endif // DIALOGGAMEAI_H
