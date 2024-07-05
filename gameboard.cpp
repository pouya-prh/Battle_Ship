#include "gameboard.h"

GameBoard::GameBoard(QWidget *parent)
    : QTableWidget(parent)
{
    setAcceptDrops(true);

    HasShipCells = new int*[10];
    for (int i = 0; i < 10; ++i) {
        HasShipCells[i] = new int[10];
        for (int j = 0; j < 10; ++j) {
            HasShipCells[i][j] = 0;
        }
    }
}
GameBoard::~GameBoard()
{

    for (int i = 0; i < rowCount(); ++i) {
        delete [] HasShipCells[i];
    }
    delete [] HasShipCells;
}
void GameBoard::SetHasShipCells(int startRow, int startColumn, int shipSize, bool horizontal)
{



    if (horizontal) {
        for (int k = 0; k < shipSize; ++k) {

            if(shipSize == 1)
            {
                HasShipCells[startRow][startColumn+k] = 1;
            }

            else if(shipSize == 2)
            {

                HasShipCells[startRow][startColumn+k] = 2;

            }
            else if (shipSize == 3)
            {

                HasShipCells[startRow][startColumn+k] = 3;
            }
            else
            {
                HasShipCells[startRow][startColumn+k] = 4;
            }


        }
    } else {
        for (int k = 0; k < shipSize; ++k) {
            QTableWidgetItem *item = new QTableWidgetItem();
            this->item(startRow+k,startColumn);
            item->setSelected(true);

        }
    }
}

QPoint GameBoard::snapToGrid(const QPoint& dropPosition)
{
    int cellSize = 40;

    int xOffset = (dropPosition.x()-50) % cellSize;
    int yOffset = (dropPosition.y()-68) % cellSize;

    int snappedX = dropPosition.x() - xOffset;
    int snappedY = dropPosition.y() - yOffset;

    if (xOffset >= cellSize / 2) {
        snappedX += cellSize;
    }
    if (yOffset >= cellSize / 2) {
        snappedY += cellSize;
    }

    return QPoint(snappedX-12, snappedY-8);
}

int** GameBoard::returnCells()
{
    return HasShipCells;
}





