#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestBrightness : SimpleFloatFilterTest {

public:
    ~FilterTestBrightness(); // _ZN20FilterTestBrightnessD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK20FilterTestBrightness8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK20FilterTestBrightness7getNameEv
    FilterTestBrightness(); // _ZN20FilterTestBrightnessC2Ev
};
