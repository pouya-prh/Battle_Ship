#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>
#include <QPoint>
#include <QHash>
class GameBoard : public QTableWidget
{
     Q_OBJECT
private:
    QTableWidget *TableWidget;
    QHash<QPoint, bool> shipCells;
public:
    GameBoard(QWidget* parent = nullptr);
    void SetHasShipCells( QPoint &startPosition, int shipSize);
    QList<QPoint> GetShipsCell();
};

#endif // GAMEBOARD_H
