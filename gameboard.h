#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>
#include <QPoint>
#include <QHash>

class GameBoard : public QTableWidget
{
     Q_OBJECT
private:

    int** shipCells;
public:
    GameBoard(QWidget* parent = nullptr);
    void SetHasShipCells(int,int,int, bool horizontal = true);
    int** GetShipsCell();
};

#endif // GAMEBOARD_H
