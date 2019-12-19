#pragma once

class FilterTestHasTradeSupply : SimpleBoolFilterTest {

public:
    virtual FilterTestHasTradeSupply::~FilterTestHasTradeSupply();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestHasTradeSupply(void);
};
