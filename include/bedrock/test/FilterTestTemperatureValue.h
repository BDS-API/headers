#pragma once

class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    virtual FilterTestTemperatureValue::~FilterTestTemperatureValue();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestTemperatureValue(void);
};