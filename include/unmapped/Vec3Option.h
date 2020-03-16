#pragma once

#include "Option.h"
#include <string>
#include <vector>


class Vec3Option : public Option {

public:
    virtual ~Vec3Option(); // _ZN10Vec3OptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void save(std::vector<std::pair<std::string, std::string>> &); // _ZN10Vec3Option4saveERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EE
    virtual void load(std::string const&); // _ZN10Vec3Option4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void load(Json::Value const&); // _ZN10Vec3Option4loadERKN4Json5ValueE
//    Vec3Option(long, long, long, std::string const&, std::string const&, long); //TODO: incomplete function definition // _ZN10Vec3OptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_RKN3glm5tvec3IfLNSB_9precisionE0EEE
//    void set(long); //TODO: incomplete function definition // _ZN10Vec3Option3setERKN3glm5tvec3IfLNS0_9precisionE0EEEb
    void getValue()const; // _ZNK10Vec3Option8getValueEv
    void getDefault()const; // _ZNK10Vec3Option10getDefaultEv
    void reset(); // _ZN10Vec3Option5resetEv
};
