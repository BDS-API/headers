#pragma once

#include <string>
#include <ostream>
#include <istream>


namespace Json {

    void operator>>(std::istream &, Json::Value &); // _ZN4JsonrsERSiRNS_5ValueE
    std::string valueToString(long); // _ZN4Json13valueToStringB5cxx11Ex
    std::string valueToString(unsigned long); // _ZN4Json13valueToStringB5cxx11Ey
    std::string valueToString(int); // _ZN4Json13valueToStringB5cxx11Ei
    std::string valueToString(unsigned int); // _ZN4Json13valueToStringB5cxx11Ej
    std::string valueToString(double); // _ZN4Json13valueToStringB5cxx11Ed
    std::string valueToString(bool); // _ZN4Json13valueToStringB5cxx11Eb
    std::string valueToQuotedString(char const*); // _ZN4Json19valueToQuotedStringB5cxx11EPKc
    void operator<<(std::ostream &, Json::Value const&); // _ZN4JsonlsERSoRKNS_5ValueE
};
