#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialogloginclicked.h"
#include "dialogsignupclicked.h"
#include "dialogpage1.h"
#include <QThread>
#include "musicplayer.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MusicPlayer *worker = new MusicPlayer();
    QThread *thread = new QThread(this);


    worker->moveToThread(thread);


    connect(thread, &QThread::started, worker, &MusicPlayer::playMusic);

    thread->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_LoginPushButton_clicked()
{
    DialogLoginClicked* LoginPage;
    LoginPage = new DialogLoginClicked(this);
    LoginPage->show();
    connect(LoginPage,&DialogLoginClicked::Login_finished,this,&MainWindow::OpenPage1);
}



void MainWindow::on_SignUppushButton_clicked()
{
    DialogSignUpClicked* page;
    page = new DialogSignUpClicked(this);
    page->show();
    connect(page,&DialogSignUpClicked::Signup_finished,this,&MainWindow::OpenPage1);

}
void MainWindow::OpenPage1(QString username,int point,int level,int drop)
{
    this->close();
    DialogPage1* page1 = new DialogPage1(username,point,level,drop);
    page1->show();

}
