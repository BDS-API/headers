#pragma once

#include "../../unmapped/FilterContext"


class FilterTestMoonPhase : SimpleFloatFilterTest {

public:
    virtual FilterTestMoonPhase::~FilterTestMoonPhase()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestMoonPhase(void);
};
