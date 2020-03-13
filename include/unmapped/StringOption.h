#pragma once

#include <string>
#include <functional>
#include "Option.h"
#include <vector>


class StringOption : Option {

public:
    ~StringOption(); // _ZN12StringOptionD2Ev
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN12StringOption4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN12StringOption4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  StringOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition // _ZN12StringOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_SA_
    void set(std::string const&, bool); // _ZN12StringOption3setERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    std::string getValue()const; // _ZNK12StringOption8getValueB5cxx11Ev
    std::string getDefault()const; // _ZNK12StringOption10getDefaultB5cxx11Ev
    void setCoerceValueCallback(std::function<std::string (std::string const&)>); // _ZN12StringOption22setCoerceValueCallbackESt8functionIFNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS6_EE
    void reset(); // _ZN12StringOption5resetEv
};
