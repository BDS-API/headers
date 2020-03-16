#pragma once

#include <string>
#include "IntOption.h"
#include <vector>
#include <unordered_map>


class EnumOption : public IntOption {

public:
    virtual ~EnumOption(); // _ZN10EnumOptionD2Ev
    virtual void __fake_function0(); // fake
//    EnumOption(long, long, long, std::string const&, std::string const&, int, std::vector<int> const&, std::unordered_map<int, std::string, std::hash<int>, long, std::allocator<std::pair<int const, std::string>>> const&); //TODO: incomplete function definition // _ZN10EnumOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_iRKSt6vectorIiSaIiEERKSt13unordered_mapIiS8_St4hashIiESt8equal_toIiESaISt4pairIKiS8_EEE
};
