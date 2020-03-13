#pragma once

#include <string>


class FilterInput {

public:
    FilterInput(int); // _ZN11FilterInputC2Ei
    ~FilterInput(); // _ZN11FilterInputD2Ev
    void getType()const; // _ZNK11FilterInput7getTypeEv
    std::string getString()const; // _ZNK11FilterInput9getStringB5cxx11Ev
    FilterInput(float); // _ZN11FilterInputC2Ef
    FilterInput(std::string const&); // _ZN11FilterInputC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FilterInput(bool); // _ZN11FilterInputC2Eb
    FilterInput(FilterInput const&); // _ZN11FilterInputC2ERKS_
    FilterInput(char const*); // _ZN11FilterInputC2EPKc
    void getInt()const; // _ZNK11FilterInput6getIntEv
    void getBool()const; // _ZNK11FilterInput7getBoolEv
    void getFloat()const; // _ZNK11FilterInput8getFloatEv
};
