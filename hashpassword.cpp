#include "hashpassword.h"
#include <QCryptographicHash>
HashPassword::HashPassword() {}

void HashPassword::Hash(QString& password)
{
    QByteArray passwordBytes = password.toUtf8();


    QByteArray hash = QCryptographicHash::hash(passwordBytes, QCryptographicHash::Sha256);


    password = QString(hash.toHex());

}
