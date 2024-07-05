#include "gameboard.h"

GameBoard::GameBoard(QWidget *parent)
    : QTableWidget(parent)
{
    /*
    shipCells = new int*[10];
    for (int i = 0; i < 10; i++)
    {
        shipCells[i] = new int[10];

        for (int j = 0; j < 10; j++)
        {
            shipCells[i][j] = 0;
        }
    }*/

    setAcceptDrops(true);
}

void GameBoard::SetHasShipCells(int startRow, int startColumn, int shipSize, bool horizontal) {



    if (horizontal) {
        for (int k = 0; k < shipSize; ++k) {
            if (startColumn + k < shipSize) {
                QTableWidgetItem *item = new QTableWidgetItem();
                item->setData(Qt::UserRole, "ship");
                setItem(startRow, startColumn + k, item);
            }
        }
    } else {
        for (int k = 0; k < shipSize; ++k) {
            if (startRow + k < shipSize) {
                QTableWidgetItem *item = new QTableWidgetItem();
                item->setData(Qt::UserRole, "ship");
                setItem(startRow + k, startColumn, item);
            }
        }
    }
}


int** GameBoard::GetShipsCell()
{
    return shipCells;
}
