#pragma once

class FilterTestBrightness : SimpleFloatFilterTest {

public:
    virtual FilterTestBrightness::~FilterTestBrightness();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestBrightness(void);
};
