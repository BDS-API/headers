#pragma once

class FilterTestTemperatureType : SimpleIntFilterTest {

public:
    virtual ~FilterTestTemperatureType();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestTemperatureType(void);
};
