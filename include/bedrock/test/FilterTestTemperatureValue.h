#pragma once

#include "../../unmapped/FilterContext"


class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    FilterTestTemperatureValue::~FilterTestTemperatureValue()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestTemperatureValue(void);
};
