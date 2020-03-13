#pragma once

#include "SimpleBoolFilterTest.h"


class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    ~FilterTestBiomeHumid(); // _ZN20FilterTestBiomeHumidD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK20FilterTestBiomeHumid8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK20FilterTestBiomeHumid7getNameEv
    FilterTestBiomeHumid(); // _ZN20FilterTestBiomeHumidC2Ev
};
