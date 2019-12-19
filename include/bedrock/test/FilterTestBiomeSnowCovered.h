#pragma once

class FilterTestBiomeSnowCovered : SimpleBoolFilterTest {

public:
    virtual FilterTestBiomeSnowCovered::~FilterTestBiomeSnowCovered();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestBiomeSnowCovered(void);
};
