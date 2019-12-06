#pragma once

class FilterTestMoonIntensity : SimpleFloatFilterTest {

public:
    virtual ~FilterTestMoonIntensity();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestMoonIntensity(void);
};
