#include "user.h"

User::User(){}

User::User(QString username,int drop,int point,int level)
{
    this->username = username;
    this->drop = drop;
    this->point = point;
    this->level = level;
}
User::User(const User& other) :
    username(other.username),
    level(other.level),
    drop(other.drop),
    point(other.point) {}

// Assignment operator
User& User::operator=(const User& other) {
    if (this != &other) {
        username = other.username;
        level = other.level;
        drop = other.drop;
        point = other.point;
    }
    return *this;
}


void User::SetUsername(QString name)
{
    username = name;
}
void User::SetDrop(int dropv)
{
    drop = dropv;
}
void User::SetPoint(int pointv)
{
    point = pointv;
}
void User::SetLevel(int levelv)
{
    level = levelv;
}
QString User::GetUsername() const {
    return username;
}

int User::GetDrop() const {
    return drop;
}

int User::GetLevel() const {
    return level;
}

int User::GetPoint() const {
    return point;
}
