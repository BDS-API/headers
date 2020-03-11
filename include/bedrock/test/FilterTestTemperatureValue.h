#pragma once

#include "./SimpleFloatFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    virtual ~FilterTestTemperatureValue();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestTemperatureValue();
};
