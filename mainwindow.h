#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QMainWindow>

typedef struct
{
    QString name;
    int drop;
    int point;
    int level;
}User;


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void  OpenPage1(User user);

private slots:


    void on_LoginPushButton_clicked();



    void on_SignUppushButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
