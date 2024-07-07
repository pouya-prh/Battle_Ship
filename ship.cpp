#include "ship.h"

Ship::Ship(int size)
{
    this->size = size;
    icon = new QIcon[size];
    for (int i = 0 ; i < size; i++)
    {
        icon[i] = QIcon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended "
                        "Source Files/Images/ship"+QString::number(size)+QString::number(i)+".png");
    }
}

int Ship::getSize() {
    return size;
}

QIcon Ship::GetIcon(int i)
{
    return icon[i];
}
