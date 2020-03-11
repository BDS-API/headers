#pragma once

#include "./SimpleFloatFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestClock : SimpleFloatFilterTest {

public:
    virtual ~FilterTestClock();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestClock();
};
