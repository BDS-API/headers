#pragma once

#include <string>
#include "ITextObject.h"


class TextObjectLocalizedText : ITextObject {

public:
    ~TextObjectLocalizedText(); // _ZN23TextObjectLocalizedTextD2Ev
    virtual std::string asString()const; // _ZNK23TextObjectLocalizedText8asStringB5cxx11Ev
    virtual bool asJsonValue()const; // _ZNK23TextObjectLocalizedText11asJsonValueEv
    TextObjectLocalizedText(std::string); // _ZN23TextObjectLocalizedTextC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
