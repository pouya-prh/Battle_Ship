#include "gameboard.h"

GameBoard::GameBoard(QWidget *parent)
    : QTableWidget(parent)
{
    shipCells = new int*[10];
    for (int i = 0; i < 10; i++)
    {
        shipCells[i] = new int[10];

        for (int j = 0; j < 10; j++)
        {
            shipCells[i][j] = 0;
        }
    }
    setAcceptDrops(true);
}

void GameBoard::SetHasShipCells(int startRow, int startColumn, int shipSize, bool horizontal) {

    int ship = shipSize;

    if (horizontal) {

        for (int k = 0; k < shipSize; ++k) {
            if (startColumn + k < 10)
            {
                shipCells[startRow][startColumn + k] = ship;
            }
        }
    } else {

        for (int k = 0; k < shipSize; ++k) {
            if (startRow + k < 10)
            {
                shipCells[startRow + k][startColumn] = ship;
            }
        }
    }
}

int** GameBoard::GetShipsCell()
{
    return shipCells;
}
