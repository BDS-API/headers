#pragma once

class FilterTestHasTradeSupply : SimpleBoolFilterTest {

public:
    virtual ~FilterTestHasTradeSupply();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestHasTradeSupply(void);
};
