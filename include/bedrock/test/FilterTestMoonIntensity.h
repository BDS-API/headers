#pragma once

#include "../../unmapped/FilterContext"


class FilterTestMoonIntensity : SimpleFloatFilterTest {

public:
    FilterTestMoonIntensity::~FilterTestMoonIntensity()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestMoonIntensity(void);
};
