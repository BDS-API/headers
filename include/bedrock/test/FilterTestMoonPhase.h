#pragma once

#include "./SimpleFloatFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestMoonPhase : SimpleFloatFilterTest {

public:
    virtual ~FilterTestMoonPhase();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestMoonPhase();
};
