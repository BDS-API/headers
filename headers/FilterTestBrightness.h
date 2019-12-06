#pragma once

class FilterTestBrightness : SimpleFloatFilterTest {

public:
    virtual ~FilterTestBrightness();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestBrightness(void);
};
