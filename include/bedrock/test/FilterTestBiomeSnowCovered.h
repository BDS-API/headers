#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBiomeSnowCovered : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestBiomeSnowCovered();
    FilterTestBiomeSnowCovered();
};
