#ifndef DIALOGSETGAMEBOARD_H
#define DIALOGSETGAMEBOARD_H
#include "gameboard.h"
#include "arms.h"
#include <QDialog>

namespace Ui {
class DialogSetGameBoard;
}

class DialogSetGameBoard : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSetGameBoard(User&,Arms&,int which = 1,QWidget *parent = nullptr);
    ~DialogSetGameBoard();
protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    bool isDropValid(int,int,int,bool horizental = true);
    bool canRotate(int,int,int,bool horizental = true);
    void rotate(QPushButton*,int);
    void ShowRedZone();
    void HideRedZone();
private slots:
    void on_nextButton_clicked();
    void on_ship21_clicked();
    void on_ship22_clicked();
    void on_ship23_clicked();
    void on_ship31_clicked();
    void on_ship32_clicked();
    void on_ship41_clicked();

private:
    Ui::DialogSetGameBoard *ui;
    GameBoard *gameBoard;
    User user;
    Arms& arms;
    int which;
};

#endif // DIALOGSETGAMEBOARD_H
