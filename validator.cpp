#include "validator.h"
#include "json.hpp"

using namespace std;
using json = nlohmann::json;
validator::validator() {}

bool validator::containsEword(const string& str){
    return any_of(str.begin(), str.end(), [](char c) { return isalpha(c); });
}
bool validator::isValidUsername(const string& str){
    if(str.length()<4)
        return false;
    if (!isalpha(str[0]) || str.back() == '_' || str.back() == '.')
        return false;
    for (size_t i = 0; i < str.size() - 1; ++i) {
        if ((str[i] == '_' || str[i] == '.') && (str[i + 1] == '_' || str[i + 1] == '.'))
            return false;
    }
    return true;
}
bool validator::isValidPassword(const string& password, const string& username){
    if (password.size() < 6 || password.size() > 20)
        return false;
    if (!any_of(password.begin(), password.end(), ::isalnum))
        return false;
    if(isValidUsername(username))
       for (size_t i = 0; i <= username.size() - 4; ++i)
        {
          if (password.find(username.substr(i, 4)) != string::npos)
          return false;
        }
    for (size_t i = 0; i <= password.size() - 4; ++i) {
        if (count(password.begin() + i, password.begin() + i + 4, password[i]) == 4)
               return false;
    }
    if (!any_of(password.begin(), password.end(), ::isupper))
        return false;
    if (!any_of(password.begin(), password.end(), ::islower))
        return false;
    if (!any_of(password.begin(), password.end(), [](char c) { return !isalnum(c) && !isspace(c); }))
        return false;
    return true;
}
bool validator::isValidEmail(const string& email, const string& username){
    regex pattern("^" + username + "@[a-zA-Z.]+\\.com$");
    return regex_match(email, pattern);
}
bool validator::isValidPhoneNumber(const string& number){
    if (number.substr(0, 2) != "09" && number.substr(0, 3) != "+98")
        return false;
    if (number.substr(0, 2) == "09" && number.size() != 11)
        return false;
    if (number.substr(0, 3) == "+98" && number.size() != 13)
        return false;
    return all_of(number.begin() + (number[0] == '+' ? 1 : 0), number.end(), ::isalnum);
}
