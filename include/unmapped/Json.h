#pragma once

#include <string>
#include <istream>
#include <ostream>


namespace Json {

    std::string valueToQuotedString(char const*);
    std::string valueToString(double);
    std::string valueToString(unsigned long);
    void operator<<(std::ostream &, Json::Value const&);
    std::string valueToString(int);
    std::string valueToString(unsigned int);
    std::string valueToString(long);
    std::string valueToString(bool);
    void operator>>(std::istream &, Json::Value &);
};
