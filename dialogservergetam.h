#ifndef DIALOGSERVERGETAM_H
#define DIALOGSERVERGETAM_H
#include "user.h"
#include "arms.h"
#include <QDialog>
namespace Ui {
class DialogServerGetAm;
}

class DialogServerGetAm : public QDialog
{
    Q_OBJECT

public:
    explicit DialogServerGetAm(User ServerUser,QWidget *parent = nullptr);
    ~DialogServerGetAm();
    Arms returnArms();
private slots:
    void on_mineButton_clicked();

    void on_airDefanceButton_clicked();

    void on_trackerButton_clicked();

    void on_linearAttackButton_clicked();

    void on_atomicBombButton_clicked();

    void on_nextButton_clicked();
signals:
    void ArmsSet();
private:
    Ui::DialogServerGetAm *ui;
    User ServerUser;
    Arms ServerArms;
};

#endif // DIALOGSERVERGETAM_H
