#include "dialogsetgameboard.h"
#include "ui_dialogsetgameboard.h"
#include "draggablebutton.h"
#include "dialoggetarm.h"

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
            sourceWidget->hide();
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

        QPoint initialPosition = sourceButton->pos();
        QPoint droped = event->position().toPoint();
        QPoint dropPosition = GameBoard::snapToGrid(droped);

        int row = ui->tableWidget->rowAt((dropPosition.y()-68)) ;
        int column = ui->tableWidget->columnAt((dropPosition.x()-50));

        if (!isDropValid(row,column, shipSize)) {
            sourceButton->move(initialPosition);
            sourceButton->show();
            event->ignore();
            return;
        }

        ui->tableWidget->SetHasShipCells(row,column,shipSize);
        ui->tableWidget->AroundOfShips(row,column,shipSize);
        if (sourceButton) {


            sourceButton->move(dropPosition);
            sourceButton->show();
        }

        event->acceptProposedAction();
    }
}

bool DialogSetGameBoard::isDropValid(int row,int column,int shipSize,bool horizental)
{
    int** HasShipCells = ui->tableWidget->returnCells();
    if (row<0||row>9||column<0||column>9)
        return false;
    if(horizental)
    {
        if(column+shipSize-1>9)
            return false;

        for (int j = column  ; j< column+shipSize ;j++)
        {
            if(j>=0&&j<=9)
            {
                if (HasShipCells[row][j]==5)
                {
                    return false;
                }
            }
        }

    }
    else
    {
        if(row+shipSize-1>9)
            return false;

        for (int j = row ; j < row+1 ; j++)
        {
            if(j>=0)
            {
                if (HasShipCells[j][column]==5)
                    return false;
            }

        }

    }

    return true;
}


void DialogSetGameBoard::on_nextButton_clicked()
{
    this->hide();
    DialogGetArm* page2 = new DialogGetArm(ui->tableWidget,ui->tableWidget->returnCells());
    page2->show();
}

void DialogSetGameBoard::rotate(QPushButton* shipButton,int size)
{

    int width = shipButton->width();
    int height = shipButton->height();
    if (width>height)
    {

        shipButton->setStyleSheet("QPushButton { border-image: url(:/Recommended Source Files"
                                  "/Recommended Source Files/Images/Vship"+QString::number(size)+".png); }");
    }
    else
    {
        shipButton->setStyleSheet("QPushButton { border-image: url(:/Recommended Source "
                                  "Files/Recommended Source Files/Images/ship"+QString::number(size)+".PNG); }");
    }
    shipButton->setFixedSize(height, width);
}

void DialogSetGameBoard::on_ship21_clicked()
{
    QPushButton *shipButton = ui->ship21;
    QPoint droped = ui->ship21->pos();
    int row = ui->tableWidget->rowAt((droped.y()-68)) ;
    int column = ui->tableWidget->columnAt((droped.x()-50)) ;
    int width = shipButton->width();
    int height = shipButton->height();
    if(width>height)
    {
        ui->tableWidget->DellAroundOfShips(row,column,2);
        if(!isDropValid(row,column,2,false))
        {
            ui->tableWidget->AroundOfShips(row,column,2);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,2);
        ui->tableWidget->SetHasShipCells(row,column,2,false);
        ui->tableWidget->AroundOfShips(row,column,2,false);
        rotate(shipButton,2);
    }
    else
    {
        ui->tableWidget->DellAroundOfShips(row,column,2,false);
        if(!isDropValid(row,column,2))
        {
            ui->tableWidget->AroundOfShips(row,column,2,false);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,2,false);
        ui->tableWidget->SetHasShipCells(row,column,2);
        ui->tableWidget->AroundOfShips(row,column,2);
        rotate(shipButton,2);
    }

}



void DialogSetGameBoard::on_ship22_clicked()
{
    QPushButton *shipButton = ui->ship22;
    QPoint droped = ui->ship22->pos();
    int row = ui->tableWidget->rowAt((droped.y()-68)) ;
    int column = ui->tableWidget->columnAt((droped.x()-50)) ;
    int width = shipButton->width();
    int height = shipButton->height();
    if(width>height)
    {

        ui->tableWidget->DellAroundOfShips(row,column,2);
        if(!isDropValid(row,column,2,false))
        {
            ui->tableWidget->AroundOfShips(row,column,2);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,2);
        ui->tableWidget->SetHasShipCells(row,column,2,false);
        ui->tableWidget->AroundOfShips(row,column,2,false);
        rotate(shipButton,2);
    }
    else
    {
        ui->tableWidget->DellAroundOfShips(row,column,2,false);
        if(!isDropValid(row,column,2))
        {
            ui->tableWidget->AroundOfShips(row,column,2,false);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,2,false);
        ui->tableWidget->SetHasShipCells(row,column,2);
        ui->tableWidget->AroundOfShips(row,column,2,false);
        rotate(shipButton,2);
    }


}


void DialogSetGameBoard::on_ship23_clicked()
{
    QPushButton *shipButton = ui->ship23;
    QPoint droped = ui->ship23->pos();
    int row = ui->tableWidget->rowAt((droped.y()-68)) ;
    int column = ui->tableWidget->columnAt((droped.x()-50)) ;
    int width = shipButton->width();
    int height = shipButton->height();
    if(width>height)
    {
        ui->tableWidget->DellAroundOfShips(row,column,2);
        if(!isDropValid(row,column,2,false))
        {
            ui->tableWidget->AroundOfShips(row,column,2);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,2);
        ui->tableWidget->SetHasShipCells(row,column,2,false);
        ui->tableWidget->AroundOfShips(row,column,2,false);
        rotate(shipButton,2);
    }
    else
    {
        ui->tableWidget->DellAroundOfShips(row,column,false);
        if(!isDropValid(row,column,2))
        {
            ui->tableWidget->AroundOfShips(row,column,2,false);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,2,false);
        ui->tableWidget->SetHasShipCells(row,column,2);
        ui->tableWidget->AroundOfShips(row,column,2);
        rotate(shipButton,2);
    }


}


void DialogSetGameBoard::on_ship31_clicked()
{
    QPushButton *shipButton = ui->ship31;
    QPoint droped = ui->ship31->pos();
    int row = ui->tableWidget->rowAt((droped.y()-68)) ;
    int column = ui->tableWidget->columnAt((droped.x()-50)) ;
    int width = shipButton->width();
    int height = shipButton->height();
    if(width>height)
    {
        ui->tableWidget->DellAroundOfShips(row,column,3);
        if(!isDropValid(row,column,2,false))
        {
            ui->tableWidget->AroundOfShips(row,column,3);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,3);
        ui->tableWidget->SetHasShipCells(row,column,3,false);
        ui->tableWidget->AroundOfShips(row,column,3,false);
        rotate(shipButton,3);
    }
    else
    {
        ui->tableWidget->DellAroundOfShips(row,column,3,false);
        if(!isDropValid(row,column,2))
        {
            ui->tableWidget->AroundOfShips(row,column,3,false);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,3,false);
        ui->tableWidget->SetHasShipCells(row,column,3);
        ui->tableWidget->AroundOfShips(row,column,3);
        rotate(shipButton,3);
    }


}


void DialogSetGameBoard::on_ship32_clicked()
{
    QPushButton *shipButton = ui->ship32;
    QPoint droped = ui->ship32->pos();
    int row = ui->tableWidget->rowAt((droped.y()-68)) ;
    int column = ui->tableWidget->columnAt((droped.x()-50)) ;
    int width = shipButton->width();
    int height = shipButton->height();
    if(width>height)
    {
        ui->tableWidget->DellAroundOfShips(row,column,3);
        if(!isDropValid(row,column,2,false))
        {
            ui->tableWidget->AroundOfShips(row,column,3);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,3);
        ui->tableWidget->SetHasShipCells(row,column,3,false);
        ui->tableWidget->AroundOfShips(row,column,3,false);
        rotate(shipButton,3);
    }
    else
    {
        ui->tableWidget->DellAroundOfShips(row,column,3,false);
        if(!isDropValid(row,column,2))
        {
            ui->tableWidget->AroundOfShips(row,column,3,false);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,3,false);
        ui->tableWidget->SetHasShipCells(row,column,3);
        ui->tableWidget->AroundOfShips(row,column,3);
        rotate(shipButton,3);
    }


}


void DialogSetGameBoard::on_ship41_clicked()
{
    QPushButton *shipButton = ui->ship41;
    QPoint droped = ui->ship41->pos();
    int row = ui->tableWidget->rowAt((droped.y()-68)) ;
    int column = ui->tableWidget->columnAt((droped.x()-50)) ;
    int width = shipButton->width();
    int height = shipButton->height();
    if(width>height)
    {
        ui->tableWidget->DellAroundOfShips(row,column,4);
        if(!isDropValid(row,column,2,false))
        {
            ui->tableWidget->AroundOfShips(row,column,4);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,4);
        ui->tableWidget->SetHasShipCells(row,column,4,false);
        ui->tableWidget->AroundOfShips(row,column,4,false);
        rotate(shipButton,4);
    }
    else
    {
        ui->tableWidget->DellAroundOfShips(row,column,4,false);
        if(!isDropValid(row,column,2))
        {
            ui->tableWidget->AroundOfShips(row,column,4,false);
            return;
        }
        ui->tableWidget->DellHasShipCells(row,column,4,false);
        ui->tableWidget->SetHasShipCells(row,column,4);
        ui->tableWidget->AroundOfShips(row,column,4);
        rotate(shipButton,4);
    }


}

