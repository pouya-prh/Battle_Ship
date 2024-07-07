#ifndef SHIP_H
#define SHIP_H
#include <QIcon>

class Ship
{
private:
    int size;
    QIcon* icon;

public:
    Ship(int);
    int getSize();
    QIcon GetIcon(int);
};

#endif // SHIP_H
