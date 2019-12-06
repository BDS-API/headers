#pragma once

class FilterTestMoonPhase : SimpleFloatFilterTest {

public:
    virtual ~FilterTestMoonPhase();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestMoonPhase(void);
};
