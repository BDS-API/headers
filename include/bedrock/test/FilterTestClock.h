#pragma once

#include "../../unmapped/FilterContext"


class FilterTestClock : SimpleFloatFilterTest {

public:
    virtual FilterTestClock::~FilterTestClock();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestClock(void);
};
