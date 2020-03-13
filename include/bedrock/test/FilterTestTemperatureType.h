#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestTemperatureType : SimpleIntFilterTest {

public:
    ~FilterTestTemperatureType(); // _ZN25FilterTestTemperatureTypeD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK25FilterTestTemperatureType8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK25FilterTestTemperatureType7getNameEv
    FilterTestTemperatureType(); // _ZN25FilterTestTemperatureTypeC2Ev
};
