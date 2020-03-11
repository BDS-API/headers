#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestHasTradeSupply : SimpleBoolFilterTest {

public:
    virtual ~FilterTestHasTradeSupply();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestHasTradeSupply();
};
