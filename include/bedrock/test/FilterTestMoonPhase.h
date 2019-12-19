#pragma once

class FilterTestMoonPhase : SimpleFloatFilterTest {

public:
    virtual FilterTestMoonPhase::~FilterTestMoonPhase();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestMoonPhase(void);
};
