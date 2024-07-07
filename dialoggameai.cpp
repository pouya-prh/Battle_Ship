#include "dialoggameai.h"
#include "ui_dialoggameai.h"

DialogGameAI::DialogGameAI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogGameAI)
{
    ui->setupUi(this);
}

DialogGameAI::~DialogGameAI()
{
    delete ui;
}
