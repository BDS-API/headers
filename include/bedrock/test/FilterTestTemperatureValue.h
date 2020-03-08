#pragma once

#include "../../unmapped/FilterContext"


class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    virtual FilterTestTemperatureValue::~FilterTestTemperatureValue()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestTemperatureValue(void);
};
