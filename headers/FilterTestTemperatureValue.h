#pragma once

class FilterTestTemperatureValue : SimpleFloatFilterTest {

public:
    virtual ~FilterTestTemperatureValue();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestTemperatureValue(void);
};
