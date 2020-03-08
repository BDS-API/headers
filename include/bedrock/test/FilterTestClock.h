#pragma once

#include "../../unmapped/FilterContext"


class FilterTestClock : SimpleFloatFilterTest {

public:
    FilterTestClock::~FilterTestClock()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestClock(void);
};
