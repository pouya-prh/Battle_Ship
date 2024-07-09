#ifndef DIALOGSERVERORCLIENT_H
#define DIALOGSERVERORCLIENT_H

#include <QDialog>

namespace Ui {
class DialogServerOrClient;
}

class DialogServerOrClient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogServerOrClient(QWidget *parent = nullptr);
    ~DialogServerOrClient();

private:
    Ui::DialogServerOrClient *ui;
};

#endif // DIALOGSERVERORCLIENT_H
