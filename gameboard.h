#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>
#include <QPoint>
#include <QHash>

class GameBoard : public QTableWidget
{
     Q_OBJECT
private:
     int** HasShipCells;
public:
    GameBoard(QWidget* parent = nullptr);
    ~GameBoard();
    void SetHasShipCells(int,int,int, bool horizontal = true);
    QPoint static snapToGrid(const QPoint&);
    int** returnCells();
};

#endif // GAMEBOARD_H
