#include "DraggableButton.h"

DraggableButton::DraggableButton(QWidget *parent)
    : QPushButton(parent) {}


void DraggableButton::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        dragStartPosition = event->pos();
    }
    QPushButton::mousePressEvent(event);
}

void DraggableButton::mouseMoveEvent(QMouseEvent *event) {
    if (!(event->buttons() & Qt::LeftButton))
        return;

    QDrag *drag = new QDrag(this);
    QMimeData *mimeData = new QMimeData;


    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);

    drag->setHotSpot(event->pos());
    mimeData->setData("application/x-ship", itemData);

    drag->setMimeData(mimeData);
    drag->setPixmap(this->grab());
    drag->exec(Qt::MoveAction);
}
