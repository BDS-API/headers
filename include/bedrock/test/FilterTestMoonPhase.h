#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestMoonPhase : SimpleFloatFilterTest {

public:
    ~FilterTestMoonPhase();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    FilterTestMoonPhase();
};
