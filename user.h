#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    User();
    User(QString,int,int,int);
    User(const User& other); // Copy constructor
    User& operator=(const User& other);
    void SetUsername(QString);
    void SetDrop(int);
    void SetPoint(int);
    void SetLevel(int);
    QString GetUsername() const;
    int GetDrop() const;
    int GetLevel() const;
    int GetPoint() const;
private:
    QString username;
    int level;
    int drop;
    int point;

};

#endif // USER_H
