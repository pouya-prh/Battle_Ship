#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <algorithm>
#include <regex>
using namespace std;
class validator
{
public:
    validator();
    static bool containsEword(const string& str);
    static bool isValidUsername(const string& str);
    static bool isValidPassword(const string& password, const string& username);
    static bool isValidEmail(const string& email, const string& name);
    static bool isValidPhoneNumber(const string& number);

};
bool isJsonFileEmpty(const std::string& filePath);
#endif // VALIDATOR_H
