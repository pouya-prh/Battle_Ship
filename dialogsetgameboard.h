#ifndef DIALOGSETGAMEBOARD_H
#define DIALOGSETGAMEBOARD_H
#include "gameboard.h"
#include <QDialog>

namespace Ui {
class DialogSetGameBoard;
}

class DialogSetGameBoard : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSetGameBoard(QWidget *parent = nullptr);
    ~DialogSetGameBoard();
protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    bool isDropValid(int,int,int,bool horizental = true);
private slots:
    void on_nextButton_clicked();

private:
    Ui::DialogSetGameBoard *ui;
    GameBoard *gameBoard;
};

#endif // DIALOGSETGAMEBOARD_H
