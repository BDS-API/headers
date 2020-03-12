#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestMoonIntensity : SimpleFloatFilterTest {

public:
    ~FilterTestMoonIntensity();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    FilterTestMoonIntensity();
};
