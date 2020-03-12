#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    ~FilterTestTemperatureValue();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    FilterTestTemperatureValue();
};
