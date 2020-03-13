#pragma once

#include <string>


namespace Json {

    class PathArgument {

    public:
        PathArgument(); // _ZN4Json12PathArgumentC2Ev
        PathArgument(unsigned int); // _ZN4Json12PathArgumentC2Ej
        PathArgument(char const*); // _ZN4Json12PathArgumentC2EPKc
        PathArgument(std::string const&); // _ZN4Json12PathArgumentC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        ~PathArgument(); // _ZN4Json12PathArgumentD2Ev
        PathArgument(Json::PathArgument &&); // _ZN4Json12PathArgumentC2EOS0_
        PathArgument(Json::PathArgument const&); // _ZN4Json12PathArgumentC2ERKS0_
    };
}
