#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleFloatFilterTest.h"


class FilterTestMoonPhase : SimpleFloatFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestMoonPhase();
    FilterTestMoonPhase();
};
