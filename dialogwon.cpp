#include "dialogwon.h"
#include "ui_dialogwon.h"
#include "updatefile.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include "dialogpage1.h"
DialogWon::DialogWon(User& user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogWon)
    ,user(user)
{
    ui->setupUi(this);
    QMediaPlayer *musicPlayer = new QMediaPlayer();
    QAudioOutput *output = new QAudioOutput();
    musicPlayer->setAudioOutput(output);
    musicPlayer->setSource(QUrl("qrc:/Win.mp3"));
    musicPlayer->play();
    UpdateFile::updateFile(user);
}
DialogWon::DialogWon(User& user , QString player , QWidget *parent)
    :QDialog(parent)
    ,ui(new Ui::DialogWon)
{
    ui->setupUi(this);
    QMediaPlayer *musicPlayer = new QMediaPlayer();
    QAudioOutput *output = new QAudioOutput();
    musicPlayer->setAudioOutput(output);
    musicPlayer->setSource(QUrl("qrc:/Win.mp3"));
    musicPlayer->play();
    UpdateFile::updateFile(user);
    ui->label->setText(player+" win");
}
DialogWon::~DialogWon()
{
    delete ui;
}

void DialogWon::on_backButton_clicked()
{
    this->close();
    DialogPage1* menuPage = new DialogPage1(user);
    menuPage->show();
}

