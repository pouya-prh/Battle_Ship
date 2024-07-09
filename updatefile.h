#ifndef UPDATEFILE_H
#define UPDATEFILE_H
#include "json.hpp"
#include "user.h"
#include <QString>
#include <fstream>
using json = nlohmann::json;

class UpdateFile
{
public:
    UpdateFile();
    void static updateFile(User);
};

#endif // UPDATEFILE_H
