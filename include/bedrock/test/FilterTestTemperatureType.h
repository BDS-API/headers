#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestTemperatureType : SimpleIntFilterTest {

public:
    virtual ~FilterTestTemperatureType();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestTemperatureType();
};
