#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleFloatFilterTest.h"


class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    ~FilterTestTemperatureValue();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    FilterTestTemperatureValue();
};
