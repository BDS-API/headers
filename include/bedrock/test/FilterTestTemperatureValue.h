#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    ~FilterTestTemperatureValue(); // _ZN26FilterTestTemperatureValueD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK26FilterTestTemperatureValue8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK26FilterTestTemperatureValue7getNameEv
    FilterTestTemperatureValue(); // _ZN26FilterTestTemperatureValueC2Ev
};
