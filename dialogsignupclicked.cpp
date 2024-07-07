#include "dialogsignupclicked.h"
#include "ui_dialogsignupclicked.h"
#include "validator.h"
#include "json.hpp"
#include "hashpassword.h"
#include "fstream"
#include <iostream>
#include <string>
using namespace std;
using json = nlohmann::json;
DialogSignUpClicked::DialogSignUpClicked(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogSignUpClicked)
{
    ui->setupUi(this);
    ui->namelineEdit->setFocus();
}

DialogSignUpClicked::~DialogSignUpClicked()
{
    delete ui;
}



bool DialogSignUpClicked::check()
{
    bool nameFlag = true;
    bool lastnameFlag = true;
    bool usernameFlag = true;
    bool passwordFlag = true;
    bool emailFlag = true;
    bool numberFlag = true;
    name = ui->namelineEdit->text();
    lastname = ui->lastNameLineEdit->text();
    username= ui->usernameLineEdit->text();
    password = ui ->passwordLineEdit->text();
    email = ui->emailLineEdit->text();
    number = ui->numberLineEdit->text();
    drop = 0;
    level = 0;
    point = 0;
    if(!validator::containsEword(name.toStdString()))
        nameFlag = false;
    if(!validator::containsEword(lastname.toStdString()))
        lastnameFlag = false;
    if(!validator::isValidUsername(username.toStdString()))
        usernameFlag = false;
    if(!validator::isValidPassword(password.toStdString(),username.toStdString()))
        passwordFlag = false;
    if(!validator::isValidEmail(email.toStdString(),name.toStdString()))
        emailFlag = false;
    if(!validator::isValidPhoneNumber(number.toStdString()))
        numberFlag = false;
    ifstream file;
    file.open("Accounts.json");
    json data;
    if(file.is_open()&&file.peek() != std::ifstream::traits_type::eof())
    {
        file>>data;
     for(auto& it:data["accounts"])
       {
           if(it["username"]==username.toStdString())
           {
            usernameFlag = false;

            }
            if(it["email"] == email.toStdString())
             {
            emailFlag = false;

            }
             if(it["number"] == number.toStdString())
            {
            numberFlag = false;
            }
        }
    }
    file.close();
    if (!nameFlag)
    {
        ui->namelineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    }
    if (!lastnameFlag)
    {
        ui->lastNameLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    }
    if (!usernameFlag)
    {
        ui->usernameLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    }
    if (!passwordFlag)
    {
        ui->passwordLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    }
    if (!emailFlag)
    {
        ui->emailLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    }
    if (!numberFlag)
    {
        ui->numberLineEdit->
            setStyleSheet("background-color: rgb(255, 0, 0);font: 25pt \"BYRIL_Sea_Battle2\";color: rgb(255, 0, 0);");
    }
    if(!nameFlag||!lastnameFlag||!usernameFlag||!passwordFlag||!emailFlag||!numberFlag)
        return false;
    makeAccount();
    return true;

}
void DialogSignUpClicked::makeAccount()
{
    ofstream file1("Accounts.json",std::ios::app);
    if (!file1.is_open())
    {
        return;
    }
    file1.close();
    json Data;
    ifstream File;
    File.open("Accounts.json");
    if(File.is_open()&&File.peek() != std::ifstream::traits_type::eof())
        File>>Data;
    File.close();
    if(!Data.contains("accounts"))
    {
        Data["accounts"] = json::array(); // create an empty "account" array
    }
    ofstream file("Accounts.json",std::ios::in);
    if (!file.is_open())
    {
        return;
    }
    HashPassword::Hash(password);
    json newAccount;
    newAccount["name"] = name.toStdString();
    newAccount["lastname"] = lastname.toStdString();
    newAccount["username"] = username.toStdString();
    newAccount["password"] = password.toStdString();
    newAccount["email"] = email.toStdString();
    newAccount["number"] = number.toStdString();
    newAccount["WinCount"] = 0;
    newAccount["LoseCount"] = 0;
    newAccount["point"]  = 0;
    newAccount["level"] = 0;
    newAccount["drop"] = 0;

    Data["accounts"].push_back(newAccount);
    file<<Data.dump(5);
    file.close();
    this->close();
    User user ;
    user.name = username;
    user.drop = 0;
    user.level = 0;
    user.point = 0;
    emit Signup_finished(user,point,level,drop);

}





void DialogSignUpClicked::on_OkButton_clicked()
{
    check();
}

