#pragma once

#include <string>
#include "ITextObject.h"
#include <vector>


class TextObjectLocalizedTextWithParams : ITextObject {

public:
    ~TextObjectLocalizedTextWithParams(); // _ZN33TextObjectLocalizedTextWithParamsD2Ev
    virtual std::string asString()const; // _ZNK33TextObjectLocalizedTextWithParams8asStringB5cxx11Ev
    virtual bool asJsonValue()const; // _ZNK33TextObjectLocalizedTextWithParams11asJsonValueEv
    TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const&); // _ZN33TextObjectLocalizedTextWithParamsC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
};
