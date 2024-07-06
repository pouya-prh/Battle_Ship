#include "mainwindow.h"
#include <QApplication>
#include "dialogsetgameboard.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // DialogSetGameBoard b;
    // b.show();


    return a.exec();
}
