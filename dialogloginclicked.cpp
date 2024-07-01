#include "dialogloginclicked.h"
#include "ui_dialogloginclicked.h"
#include <fstream>
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
DialogLoginClicked::DialogLoginClicked(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogLoginClicked)
{
    ui->setupUi(this);
    ui->usernameLineEdit->setFocus();
}

DialogLoginClicked::~DialogLoginClicked()
{
    delete ui;
}
bool DialogLoginClicked::CheckUser()
{

    username = ui->usernameLineEdit->text();
    password = ui->passwordLineEdit->text();
    if (username.isEmpty())
        ui->usernameLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    if (password.isEmpty())
        ui->passwordLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    if(username.isEmpty()||password.isEmpty())
        return false;

    json data;
    ifstream file ;
    file.open("Accounts.json");
    if (!file.is_open())
    {
        file.close();
        ui->passwordLineEdit->clear();
        ui->usernameLineEdit->clear();
        ui->passwordLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
        ui->usernameLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
        return false;
    }
    if(file.is_open()&&file.peek() != std::ifstream::traits_type::eof())
    {

        file>>data;
       for (auto& it:data["accounts"])
        {
        string Username = it["username"];
        string Password = it["password"];
          if (Username == username.toStdString()&&Password == password.toStdString())
          {
            this->close();
            emit Login_finished(true);
            return true;
           }

         }
     }
     file.close();
     ui->passwordLineEdit->clear();
     ui->usernameLineEdit->clear();
     ui->passwordLineEdit->
         setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    ui->usernameLineEdit->
        setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    return false;

}

void DialogLoginClicked::on_OkButton_clicked()
{
    CheckUser();

}

