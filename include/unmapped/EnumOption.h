#pragma once

#include <string>
#include "IntOption.h"
#include <unordered_map>
#include <vector>


class EnumOption : IntOption {

public:
    ~EnumOption(); // _ZN10EnumOptionD2Ev
//  EnumOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int> const&, std::unordered_map<int, std::string, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<int const, std::string>>> const&); //TODO: incomplete function definition // _ZN10EnumOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_iRKSt6vectorIiSaIiEERKSt13unordered_mapIiS8_St4hashIiESt8equal_toIiESaISt4pairIKiS8_EEE
};
