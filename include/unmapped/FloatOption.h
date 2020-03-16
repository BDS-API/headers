#pragma once

#include "Option.h"
#include <string>
#include <vector>


class FloatOption : public Option {

public:
    virtual ~FloatOption(); // _ZN11FloatOptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN11FloatOption4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN11FloatOption4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//    FloatOption(long, long, long, std::string const&, std::string const&, float, float, float); //TODO: incomplete function definition // _ZN11FloatOptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_fff
    void set(float, bool); // _ZN11FloatOption3setEfb
    void getValue()const; // _ZNK11FloatOption8getValueEv
    void getDefault()const; // _ZNK11FloatOption10getDefaultEv
    void reset(); // _ZN11FloatOption5resetEv
};
