#pragma once

#include "../../unmapped/FilterContext"


class FilterTestHasTradeSupply : SimpleBoolFilterTest {

public:
    virtual FilterTestHasTradeSupply::~FilterTestHasTradeSupply()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestHasTradeSupply(void);
};
