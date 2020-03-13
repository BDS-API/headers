#pragma once

#include <string>
#include <functional>
#include "Option.h"
#include <vector>


class BoolOption : Option {

public:
    ~BoolOption(); // _ZN10BoolOptionD2Ev
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN10BoolOption4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN10BoolOption4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  BoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool); //TODO: incomplete function definition // _ZN10BoolOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_b
    void _set(bool, bool); // _ZN10BoolOption4_setEbb
    void set(bool, bool); // _ZN10BoolOption3setEbb
    void setDefault(bool); // _ZN10BoolOption10setDefaultEb
    void getDefault()const; // _ZNK10BoolOption10getDefaultEv
    void getValue()const; // _ZNK10BoolOption8getValueEv
    void setCoerceValueCallback(std::function<bool (bool)>); // _ZN10BoolOption22setCoerceValueCallbackESt8functionIFbbEE
    void toggle(); // _ZN10BoolOption6toggleEv
    void reset(); // _ZN10BoolOption5resetEv
};
