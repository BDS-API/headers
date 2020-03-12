#pragma once

#include <istream>
#include <ostream>
#include "../json/Value.h"


namespace Json {

    std::string valueToString(long);
    void operator<<(std::ostream &, Json::Value const&);
    std::string valueToString(int);
    std::string valueToQuotedString(char const*);
    void operator>>(std::istream &, Json::Value &);
    std::string valueToString(bool);
    std::string valueToString(double);
    std::string valueToString(unsigned long);
    std::string valueToString(unsigned int);
};
