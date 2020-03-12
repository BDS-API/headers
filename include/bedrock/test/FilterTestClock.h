#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleFloatFilterTest.h"


class FilterTestClock : SimpleFloatFilterTest {

public:
    virtual void getName()const;
    ~FilterTestClock();
    virtual void evaluate(FilterContext const&)const;
    FilterTestClock();
};
