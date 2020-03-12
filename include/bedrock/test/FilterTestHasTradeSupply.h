#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestHasTradeSupply : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestHasTradeSupply();
    virtual void getName()const;
    FilterTestHasTradeSupply();
};
