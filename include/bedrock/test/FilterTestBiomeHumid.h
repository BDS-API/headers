#pragma once

class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    virtual FilterTestBiomeHumid::~FilterTestBiomeHumid();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestBiomeHumid(void);
};