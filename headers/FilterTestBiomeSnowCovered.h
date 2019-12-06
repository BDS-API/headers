#pragma once

class FilterTestBiomeSnowCovered : SimpleBoolFilterTest {

public:
    virtual ~FilterTestBiomeSnowCovered();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void FilterTestBiomeSnowCovered(void);
};
