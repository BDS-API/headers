#pragma once

#include <string>
#include <functional>
#include "Option.h"
#include <vector>


class IntOption : Option {

public:
    ~IntOption(); // _ZN9IntOptionD2Ev
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN9IntOption4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN9IntOption4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int> const&, bool); //TODO: incomplete function definition // _ZN9IntOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_iRKSt6vectorIiSaIiEEb
    void _validate(int); // _ZN9IntOption9_validateEi
//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, bool, int, int); //TODO: incomplete function definition // _ZN9IntOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ibii
    void set(int, bool); // _ZN9IntOption3setEib
    void getValue()const; // _ZNK9IntOption8getValueEv
    void getDefault()const; // _ZNK9IntOption10getDefaultEv
    void getValues()const; // _ZNK9IntOption9getValuesEv
    void setCoerceSaveValueCallback(std::function<int (int)>); // _ZN9IntOption26setCoerceSaveValueCallbackESt8functionIFiiEE
    void reset(); // _ZN9IntOption5resetEv
};
