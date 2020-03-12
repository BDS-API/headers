#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestClock : SimpleFloatFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestClock();
    virtual void getName()const;
    FilterTestClock();
};
