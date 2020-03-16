#pragma once

#include "Option.h"
#include <string>
#include <map>
#include <vector>


class InputModeBoolOption : public Option {

public:
    virtual ~InputModeBoolOption(); // _ZN19InputModeBoolOptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN19InputModeBoolOption4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN19InputModeBoolOption4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void load(std::map<std::string, std::string, long, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN19InputModeBoolOption4loadERSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4lessIS6_ESaISt4pairIKS6_S6_EEE
//    InputModeBoolOption(long, long, long, std::string const&, std::string const&, bool); //TODO: incomplete function definition // _ZN19InputModeBoolOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_b
//    InputModeBoolOption(long, long, long, std::string const&, std::string const&, bool, bool, bool, bool); //TODO: incomplete function definition // _ZN19InputModeBoolOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_bbbb
//    void getValue(long)const; //TODO: incomplete function definition // _ZNK19InputModeBoolOption8getValueE9InputMode
//    void set(long, bool, bool); //TODO: incomplete function definition // _ZN19InputModeBoolOption3setE9InputModebb
//    void getDefault(long)const; //TODO: incomplete function definition // _ZNK19InputModeBoolOption10getDefaultE9InputMode
//    void _saveForInputMode(std::vector<std::pair<std::string, std::string>> &, long); //TODO: incomplete function definition // _ZN19InputModeBoolOption17_saveForInputModeERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE9InputMode
//    void reset(long); //TODO: incomplete function definition // _ZN19InputModeBoolOption5resetE9InputMode
};
