#ifndef DRAGGABLEBUTTON_H
#define DRAGGABLEBUTTON_H
#include <QApplication>
#include <QPushButton>
#include <QDrag>
#include <QMimeData>
#include <QMouseEvent>

class DraggableButton : public QPushButton {
    Q_OBJECT

public:
    explicit DraggableButton(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override ;

private:
    QPoint dragStartPosition;
};

#endif // DRAGGABLEBUTTON_H
