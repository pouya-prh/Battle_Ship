#include "page1.h"
#include "ui_page1.h"

Page1::Page1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Page1)
{
    ui->setupUi(this);
}

Page1::~Page1()
{
    delete ui;
}
