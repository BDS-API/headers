#pragma once

#include "./SimpleFloatFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestMoonIntensity : SimpleFloatFilterTest {

public:
    virtual ~FilterTestMoonIntensity();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestMoonIntensity();
};
