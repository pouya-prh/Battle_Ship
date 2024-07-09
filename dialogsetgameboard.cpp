#include "dialogsetgameboard.h"
#include "ui_dialogsetgameboard.h"
#include "draggablebutton.h"
#include "dialoggameai.h"
#include "dialoggetarm.h"
#include "dialogondevice.h"
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;
DialogSetGameBoard::DialogSetGameBoard(User& user,Arms& arms,int which,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogSetGameBoard),
    arms(arms)
{
    this->user = user;
    this->which = which;
    ui->setupUi(this);
    setAcceptDrops(true);
    ui->mine1->hide();
    ui->mine2->hide();
    ui->airDefance1->hide();
    ui->airDefance2->hide();
    int mineCount = arms.getMineCount();
    int airDefanceCount = arms.getAirDefanceCount();
    if (mineCount == 1)
    {
        ui->mine1->show();
    }
    else if (mineCount == 2)
    {
        ui->mine1->show();
        ui->mine2->show();
    }

    if (airDefanceCount==1)
    {
        ui->airDefance1->show();
    }
    else if (airDefanceCount == 2)
    {
        ui->airDefance1->show();
        ui->airDefance2->show();
    }

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
        ShowRedZone();
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
        HideRedZone();
        DraggableButton *sourceButton = qobject_cast<DraggableButton*>(event->source());
        QByteArray itemData = event->mimeData()->data("application/x-ship");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);
        int shipSize;
        int shipKind;

        if (event->source()==ui->ship11)
        {
            shipSize = 1;
            shipKind =11;
        }
        else if(event->source()==ui->ship12)
        {
            shipSize = 1;
            shipKind = 12;
        }
        else if(event->source()==ui->ship13)
        {
            shipSize = 1;
            shipKind = 13;
        }
        else if (event->source()==ui->ship21)
        {
            shipSize = 2;
            shipKind =21;
        }
        else if(event->source()==ui->ship22)
        {
            shipSize = 2;
            shipKind =22;
        }
        else if (event->source()==ui->ship23)
        {
            shipSize = 2;
            shipKind = 23;
        }
        else if(event->source()==ui->ship31)
        {
            shipSize = 3;
            shipKind = 31;
        }
        else if (event->source()==ui->ship32)
        {
            shipSize = 3;
            shipKind = 32;
        }
        else if (event->source() == ui->ship41)
        {
            shipSize = 4;
            shipKind = 41;
        }
        else if (event->source() == ui->mine1||event->source() == ui->mine2)
        {
            shipSize = 0;
            shipKind = 7;
        }
        else
        {
            shipSize = 0 ;
            shipKind = 8;
        }

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

        ui->tableWidget->SetHasShipCells(row,column,shipSize,shipKind);
        ui->tableWidget->AroundOfShips(row,column,shipSize);
        if (sourceButton) {


            sourceButton->move(dropPosition);
            sourceButton->show();
        }

        event->acceptProposedAction();
    }
}
void DialogSetGameBoard::ShowRedZone()
{
    int** cells = ui->tableWidget->returnCells();
    for (int i =0 ; i <10;i++)
    {
        for (int j = 0 ; j <10 ; j ++)
        {
            if (cells[i][j] == 5)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                QIcon icon("D:/Qt/Project/EntryPage/Recommended Source Files/Recommended Source Files/Images/RedUnavailible.jpg");
                item->setIcon(icon);
                ui->tableWidget->setItem(i,j,item);
            }
        }
    }
}
void DialogSetGameBoard::HideRedZone()
{
    int** cells = ui->tableWidget->returnCells();
    for (int i =0 ; i <10;i++)
    {
        for (int j = 0 ; j <10 ; j ++)
        {
            if (cells[i][j] == 5)
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                ui->tableWidget->setItem(i,j,item);
            }
        }
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
                if (HasShipCells[row][j]==5/*||HasShipCells[row][j] == 7 || HasShipCells[row][j] == 8*/)
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
                if (HasShipCells[j][column]==5/*||HasShipCells[j][column] == 7||HasShipCells[j][column]*/)
                    return false;
            }

        }

    }

    return true;
}


void DialogSetGameBoard::on_nextButton_clicked()
{
    this->close();
    int** cells = ui->tableWidget->returnCells();
    if(which == 1)
    {
        DialogGameAI* Game = new DialogGameAI(user,arms,cells);
        Game->show();
    }
    else if (which == 3)
    {
        std::ofstream playerAccount ("playerAccount.bin" , std::ios::binary);
        playerAccount.write(reinterpret_cast<const char*>(&user),sizeof(user));
        playerAccount.close();
        std::fstream file ("OnDevice.json",std::ios::out);
        json data;
        data["airDefenseCounter"] = arms.getAirDefanceCount();
        data["mineCounter"] = arms.getMineCount();
        data["atomicBombCounter"] = arms.getAtomicBombCount();
        data["trackerCounter"] = arms.getTrackerCount();
        data["linearAttackCounter"] = arms.getLineAttackerCount();
        if(file.is_open())
          file<<data.dump(5);
        file.close();
        std::ofstream File ("Coordinates.bin",std::ios::binary);
        for (int i = 0 ; i < 10 ; i++)
        {
            for (int j =0 ; j < 10 ; j++)
            {
                File.write(reinterpret_cast<const char*>(&cells[i][j]), sizeof(int));
            }
        }
        File.close();
        this->close();
        DialogGetArm* getArmPlayer2 = new DialogGetArm(user,32);
        getArmPlayer2 ->show();
    }
    else if (which == 32)
    {
        std::fstream file ("OnDevice.json",std::ios::in);
        json data;
        file>>data;
        file.close();
        std::ifstream File ("Coordinates.bin",std::ios::binary);
        int** array = new int*[10];
        for (int i = 0; i < 10; ++i) {
            array[i] = new int[10];
            for (int j = 0; j < 10; ++j) {
                File.read(reinterpret_cast<char*>(&array[i][j]), sizeof(int));
            }
        }
        File.close();
        Arms player1_arms(data["mineCounter"],data["airDefenseCounter"],data["atomicBombCounter"],data["linearAttackCounter"],data["trackerCounter"]);
        this->close();
        DialogOnDevice* onDevicePage = new DialogOnDevice(player1_arms,arms,array,cells);
        onDevicePage->show();
    }

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
        ui->tableWidget->SetHasShipCells(row,column,2,21,false);
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
        ui->tableWidget->SetHasShipCells(row,column,2,21);
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
        ui->tableWidget->SetHasShipCells(row,column,2,22,false);
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
        ui->tableWidget->SetHasShipCells(row,column,2,22);
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
        ui->tableWidget->SetHasShipCells(row,column,2,23,false);
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
        ui->tableWidget->SetHasShipCells(row,column,2,23);
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
        ui->tableWidget->SetHasShipCells(row,column,3,31,false);
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
        ui->tableWidget->SetHasShipCells(row,column,3,31);
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
        ui->tableWidget->SetHasShipCells(row,column,3,32,false);
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
        ui->tableWidget->SetHasShipCells(row,column,3,32);
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
        ui->tableWidget->SetHasShipCells(row,column,4,41,false);
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
        ui->tableWidget->SetHasShipCells(row,column,4,41);
        ui->tableWidget->AroundOfShips(row,column,4);
        rotate(shipButton,4);
    }


}

