#pragma once

#include <istream>
#include "../json/Value.h"
#include <ostream>
#include <string>


class Json {

public:


    void operator>>(std::istream &, Json::Value &);
    std::string valueToString(long);
    std::string valueToString(unsigned long);
    std::string valueToString(int);
    std::string valueToString(unsigned int);
    std::string valueToString(double);
    std::string valueToString(bool);
    std::string valueToQuotedString(char const*);
    void operator<<(std::ostream &, Json::Value const&);
};
