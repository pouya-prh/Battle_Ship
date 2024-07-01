#include "dialogsetgameboard.h"
#include "ui_dialogsetgameboard.h"
#include "draggablebutton.h"
#include "ship.h"

DialogSetGameBoard::DialogSetGameBoard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogSetGameBoard)
{
    ui->setupUi(this);
    setAcceptDrops(true);



}

DialogSetGameBoard::~DialogSetGameBoard()
{
    delete ui;
}
void DialogSetGameBoard::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {
        QWidget *sourceWidget = qobject_cast<QWidget *>(event->source());
        if (sourceWidget) {
            sourceWidget->hide();  // Hide the source widget
        }
        event->acceptProposedAction();
    }
}

void DialogSetGameBoard::dragMoveEvent(QDragMoveEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {
        event->acceptProposedAction();
    }
}

void DialogSetGameBoard::dropEvent(QDropEvent *event) {
    if (event->mimeData()->hasFormat("application/x-ship")) {

        DraggableButton *sourceButton = qobject_cast<DraggableButton*>(event->source());
        QByteArray itemData = event->mimeData()->data("application/x-ship");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);
        int shipSize;
        if (event->source()==ui->ship11||event->source()==ui->ship12||event->source()==ui->ship13)
            shipSize = 1;
        else if (event->source()==ui->ship21||event->source()==ui->ship22||event->source()==ui->ship23)
            shipSize = 2;
        else if(event->source()==ui->ship31||event->source()==ui->ship32)
            shipSize = 3;
        else
            shipSize = 4;
        QPoint dropPosition = event->position().toPoint() - sourceButton->rect().center();
        QPoint initialPosition = sourceButton->pos();

        int row = ui->tableWidget->rowAt(dropPosition.y()) - 2;
        int column = ui->tableWidget->columnAt(dropPosition.x()) -1;

        if (!isDropValid(row,column, shipSize)) {
            sourceButton->move(initialPosition);
            sourceButton->show();
            event->ignore();
            return;
        }
       // Ship *newShip = new Ship(shipSize);

        ui->tableWidget->SetHasShipCells(row,column,shipSize);
        if (sourceButton) {
            // Move the source button to the drop location
            sourceButton->move(dropPosition);
            sourceButton->show();
        }
        event->acceptProposedAction();
    }
}

bool DialogSetGameBoard::isDropValid(int row,int column,int shipSize,bool horizental)
{
    if(horizental)
    {
        if(column+shipSize>9)
            return false;
    }
    else
    {
        if(row+shipSize>9)
            return false;
    }

   return true;
}
