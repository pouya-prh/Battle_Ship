#include "ship.h"

Ship::Ship(int size)
{
    this->size = size;
}

int Ship::getSize() {
    return size;
}

void Ship::setPosition(QPoint &position)
{
    this->position = position;
}

QPoint Ship::poition()
{
    return position;
}
