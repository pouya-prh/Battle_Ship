#ifndef SHIP_H
#define SHIP_H
#include <QPoint>
class Ship
{
private:
    int size;
    QPoint position;
public:
    Ship(int size =0);
    int getSize();
    void setPosition(QPoint&);
    QPoint poition();
};

#endif // SHIP_H
