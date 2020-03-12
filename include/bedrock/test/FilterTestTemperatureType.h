#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestTemperatureType : SimpleIntFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestTemperatureType();
    FilterTestTemperatureType();
};
