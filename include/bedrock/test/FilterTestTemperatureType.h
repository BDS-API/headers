#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestTemperatureType : SimpleIntFilterTest {

public:
    virtual void getName()const;
    ~FilterTestTemperatureType();
    virtual void evaluate(FilterContext const&)const;
    FilterTestTemperatureType();
};
