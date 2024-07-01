#include "gameboard.h"

GameBoard::GameBoard(QWidget *parent)
    : QTableWidget(parent)
{
    setAcceptDrops(true);
}

void GameBoard::SetHasShipCells( QPoint &startPosition, int shipSize)
{

    for (int i = 0; i < shipSize; ++i) {
        QPoint cellPosition(startPosition.x(), startPosition.y() + i);
        shipCells[cellPosition] = true;
    }
}

QList<QPoint> GameBoard::GetShipsCell()  {
    return shipCells.keys();
}
