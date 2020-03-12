#pragma once

#include "SimpleBoolFilterTest.h"


class FilterTestBiomeSnowCovered : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~FilterTestBiomeSnowCovered();
    virtual void evaluate(FilterContext const&)const;
    FilterTestBiomeSnowCovered();
};
