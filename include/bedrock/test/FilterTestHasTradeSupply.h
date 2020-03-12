#pragma once

#include "SimpleBoolFilterTest.h"


class FilterTestHasTradeSupply : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestHasTradeSupply();
    virtual void getName()const;
    FilterTestHasTradeSupply();
};
