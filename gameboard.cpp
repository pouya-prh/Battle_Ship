#include "gameboard.h"

GameBoard::GameBoard(QWidget *parent)
    : QTableWidget(parent)
{
    setAcceptDrops(true);
}

void GameBoard::SetHasShipCells(int startRow, int startColumn, int shipSize, bool horizontal)
{

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


