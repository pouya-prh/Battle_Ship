#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>
#include <QPoint>
#include <QHash>

class GameBoard : public QTableWidget
{
     Q_OBJECT
private:


public:
    GameBoard(QWidget* parent = nullptr);
    void SetHasShipCells(int,int,int, bool horizontal = true);
};

#endif // GAMEBOARD_H
