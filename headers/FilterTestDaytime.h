#pragma once

class FilterTestDaytime : SimpleBoolFilterTest {

public:
    virtual ~FilterTestDaytime();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestDaytime(void);
};
