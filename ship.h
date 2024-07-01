#ifndef SHIP_H
#define SHIP_H
#include <QPoint>
class Ship
{
private:
    int size;

public:
    Ship(int size =0);
    int getSize();
};

#endif // SHIP_H
