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
    void SetHasShipCells(int,int,int,int,bool horizontal = true);
    void DellHasShipCells(int,int,int,bool horizental = true);
    void AroundOfShips(int,int,int,bool horizental = true);
    void DellAroundOfShips(int,int,int,bool horizental = true);

    QPoint static snapToGrid(const QPoint&);
    int** returnCells();
};

#endif // GAMEBOARD_H
