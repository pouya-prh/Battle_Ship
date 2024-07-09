#ifndef DIALOGONDEVICE_H
#define DIALOGONDEVICE_H
#include "arms.h"
#include <QDialog>
#include "draggablebutton.h"
namespace Ui {
class DialogOnDevice;
}

class DialogOnDevice : public QDialog
{
    Q_OBJECT

public:
    explicit DialogOnDevice(Arms,Arms,int**,int** , QWidget *parent = nullptr);
    ~DialogOnDevice();
    void Display(int**);
    void Attack(int**,int,int);
    void player1_Play(int,int,int);
    void player2_Play(int,int,int);
    void makeEmptyAround(int** ,int );
    void dragEnterEvent(QDragEnterEvent *event)override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void shipFind(int ,int );
    void Animation(int ,int ,int );

private slots:
    void on_linearAttack1_clicked();

    void on_linearAttackbutton2_clicked();

    void on_atomicBomb1_clicked();

    void on_atomicBomb2_clicked();

    void on_trackerButton1_clicked();

    void on_trackerButton2_clicked();

private:
    Ui::DialogOnDevice *ui;
    int** player1_cells;
    int** player2_cells;
    int turn;
    Arms player1_arms;
    Arms player2_arms;
    int player1DestroyedShip21;
    int player1DestroyedShip22;
    int player1DestroyedShip23;
    int player1DestroyedShip31;
    int player1DestroyedShip32;
    int player1DestroyedShip4;
    int player2DestroyedShip21;
    int player2DestroyedShip22;
    int player2DestroyedShip23;
    int player2DestroyedShip31;
    int player2DestroyedShip32;
    int player2DestroyedShip4;
};

#endif // DIALOGONDEVICE_H
