#pragma once

#include "../../unmapped/FilterContext"


class FilterTestHasTradeSupply : SimpleBoolFilterTest {

public:
    FilterTestHasTradeSupply::~FilterTestHasTradeSupply()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestHasTradeSupply(void);
};
