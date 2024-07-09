#include "dialoglost.h"
#include "ui_dialoglost.h"
#include "dialogpage1.h"
#include <QMediaPlayer>
#include <QAudioOutput>
DialogLost::DialogLost(User& user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogLost)
    ,user(user)
{
    ui->setupUi(this);
    QMediaPlayer *musicPlayer = new QMediaPlayer();
    QAudioOutput *output = new QAudioOutput();
    musicPlayer->setAudioOutput(output);
    musicPlayer->setSource(QUrl("qrc:/Lose.mp3"));
    musicPlayer->play();
    UpdateFile::updateFile(user);
}

DialogLost::~DialogLost()
{
    delete ui;
}


void DialogLost::on_backButton_clicked()
{
    this->close();
    DialogPage1* menuPage = new DialogPage1(user);
    menuPage->show();
}

