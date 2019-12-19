#pragma once

class FilterTestDaytime : SimpleBoolFilterTest {

public:
    virtual FilterTestDaytime::~FilterTestDaytime();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestDaytime(void);
};
