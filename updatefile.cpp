#include "updatefile.h"
#include <string>
using namespace std;
UpdateFile::UpdateFile() {}

void UpdateFile::updateFile(User user)
{
    std::fstream file ("Accounts.json",std::ios::in | std::ios::out);
    json data;
    file>>data;
    for (auto& it:data["accounts"])
    {
        string Username = it["username"];
        if (Username == user.GetUsername().toStdString())
        {
            it["point"] = user.GetPoint();
            it["level"]  = user.GetLevel();
            it["drop"]  = user.GetDrop();
        }

    }
    file.clear();
    file.seekp(0);
    file<<data.dump(5);
    file.close();
}
