#ifndef DIALOGLOST_H
#define DIALOGLOST_H
#include "user.h"
#include <QDialog>
#include "updatefile.h"
namespace Ui {
class DialogLost;
}

class DialogLost : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLost(User&,QWidget *parent = nullptr);
    ~DialogLost();

private slots:
    void on_backButton_clicked();

private:
    Ui::DialogLost *ui;
    User user;
};

#endif // DIALOGLOST_H
