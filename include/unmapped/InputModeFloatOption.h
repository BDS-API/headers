#pragma once

#include <map>
#include "Option.h"
#include <vector>
#include <string>


class InputModeFloatOption : Option {

public:
    ~InputModeFloatOption(); // _ZN20InputModeFloatOptionD2Ev
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN20InputModeFloatOption4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN20InputModeFloatOption4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN20InputModeFloatOption4loadERSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4lessIS6_ESaISt4pairIKS6_S6_EEE
//  InputModeFloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, float, float, float); //TODO: incomplete function definition // _ZN20InputModeFloatOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_fff
//  void getValue(InputMode)const; //TODO: incomplete function definition // _ZNK20InputModeFloatOption8getValueE9InputMode
//  void set(InputMode, float, bool); //TODO: incomplete function definition // _ZN20InputModeFloatOption3setE9InputModefb
//  void getDefault(InputMode)const; //TODO: incomplete function definition // _ZNK20InputModeFloatOption10getDefaultE9InputMode
//  void _saveForInputMode(std::vector<std::pair<std::string, std::string>> &, InputMode); //TODO: incomplete function definition // _ZN20InputModeFloatOption17_saveForInputModeERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE9InputMode
//  void reset(InputMode); //TODO: incomplete function definition // _ZN20InputModeFloatOption5resetE9InputMode
};
