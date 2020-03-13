#pragma once

#include <string>


class OptionalString {

public:
    OptionalString(std::string const&); // _ZN14OptionalStringC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  OptionalString(decltype(nullptr); //TODO: incomplete function definition // _ZN14OptionalStringC2EDn
    ~OptionalString(); // _ZN14OptionalStringD2Ev
    OptionalString(std::string &&); // _ZN14OptionalStringC2EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
