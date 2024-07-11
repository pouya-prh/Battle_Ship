#ifndef DIALOGSERVERSETGAMEBOARD_H
#define DIALOGSERVERSETGAMEBOARD_H
#include "user.h"
#include "arms.h"
#include <QDialog>

namespace Ui {
class DialogServerSetGameBoard;
}

class DialogServerSetGameBoard : public QDialog
{
    Q_OBJECT

public:
    explicit DialogServerSetGameBoard(User user,Arms arms,QWidget *parent = nullptr);
    ~DialogServerSetGameBoard();
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
signals:
    void SetGameBoardFinished(int**);
private:
    Ui::DialogServerSetGameBoard *ui;
    User user;
    Arms arms;
};

#endif // DIALOGSERVERSETGAMEBOARD_H
