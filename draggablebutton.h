#ifndef DRAGGABLEBUTTON_H
#define DRAGGABLEBUTTON_H
#include <QApplication>
#include <QPushButton>
#include <QDrag>
#include <QMimeData>
#include <QMouseEvent>
#include "ship.h"
class DraggableButton : public QPushButton {
    Q_OBJECT

public:
    explicit DraggableButton(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    Ship ship() const;
    void setShip(const Ship &ship);

private:
    QPoint dragStartPosition;
    Ship _ship;
};

#endif // DRAGGABLEBUTTON_H
