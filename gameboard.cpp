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

    for (int i = 0; i < 10; ++i) {
        delete [] HasShipCells[i];
    }
    delete [] HasShipCells;
}
void GameBoard::SetHasShipCells(int startRow, int startColumn, int shipSize, bool horizontal)
{



    if (horizontal) {
        for (int k = 0; k < shipSize; ++k)
        {
            HasShipCells[startRow][startColumn+k] = shipSize;
        }
    } else {
        for (int k = 0; k < shipSize; ++k)
        {
            int size = -(shipSize);
            HasShipCells[startRow+k][startColumn] = size;

        }
    }
}

void GameBoard::DellHasShipCells(int startRow, int startColumn, int shipSize, bool horizontal)
{
    if (horizontal)
    {

        for (int k = 0; k < shipSize; ++k)
            HasShipCells[startRow][startColumn+k] = 0;
    }
    else
    {

        for (int k = 0; k < shipSize; ++k)
            HasShipCells[startRow+k][startColumn] = 0;
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

void GameBoard::AroundOfShips(int startRow,int startColumn,int shipSize,bool horizental)
{
    if (horizental)
    {
        for (int i =startRow-1 ; i <= startRow+1;i++)
        {
            for(int j =startColumn-1 ; j <= startColumn+shipSize;j++)
            {
                if (i>=0&&i<=9&&j>=0&&j<=9)
                {
                    if (HasShipCells[i][j]==0)
                        HasShipCells[i][j] = 5;
                }
            }
        }
    }
    else
    {
        for (int i = startColumn-1;i<= startColumn+1;i++)
        {
            for(int j = startRow-1;j<= startRow+shipSize;j++)
            {
                if (i>=0&&i<=9&&j>=0&&j<=9)
                {
                    if (HasShipCells[j][i] == 0)
                        HasShipCells[j][i] = 5;
                }
            }
        }
    }
}

void GameBoard::DellAroundOfShips(int row,int column,int shipsize,bool horizental)
{
    if (horizental)
    {
        for (int i = row-1 ;i <= row+1;i++)
        {
            for (int j = column-1; j<= column+shipsize ;j++)
            {
                if(i>=0&&i<=9&&j>=0&&j<=9)
                {
                    if (HasShipCells[i][j]==5)
                    {
                        HasShipCells[i][j] = 0;
                    }
                }
            }
        }
    }
    else
    {
        for (int i = column - 1;i <= column+1 ;i++)
        {
            for (int j = row-1 ; j <= row+shipsize ; j++)
            {
                if(i>=0&&i<=9&&j>=0&&j<=9)
                {
                    if (HasShipCells[j][i]==5)
                    {
                        HasShipCells[j][i] = 0;
                    }
                }
            }
        }
    }
}



