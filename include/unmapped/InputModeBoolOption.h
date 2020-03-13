#pragma once

#include <map>
#include "Option.h"
#include <vector>
#include <string>


class InputModeBoolOption : Option {

public:
    ~InputModeBoolOption(); // _ZN19InputModeBoolOptionD2Ev
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN19InputModeBoolOption4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN19InputModeBoolOption4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN19InputModeBoolOption4loadERSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4lessIS6_ESaISt4pairIKS6_S6_EEE
//  InputModeBoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool); //TODO: incomplete function definition // _ZN19InputModeBoolOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_b
//  InputModeBoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool, bool, bool, bool); //TODO: incomplete function definition // _ZN19InputModeBoolOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_bbbb
//  void getValue(InputMode)const; //TODO: incomplete function definition // _ZNK19InputModeBoolOption8getValueE9InputMode
//  void set(InputMode, bool, bool); //TODO: incomplete function definition // _ZN19InputModeBoolOption3setE9InputModebb
//  void getDefault(InputMode)const; //TODO: incomplete function definition // _ZNK19InputModeBoolOption10getDefaultE9InputMode
//  void _saveForInputMode(std::vector<std::pair<std::string, std::string>> &, InputMode); //TODO: incomplete function definition // _ZN19InputModeBoolOption17_saveForInputModeERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE9InputMode
//  void reset(InputMode); //TODO: incomplete function definition // _ZN19InputModeBoolOption5resetE9InputMode
};
