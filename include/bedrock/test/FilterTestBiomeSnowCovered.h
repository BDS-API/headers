#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBiomeSnowCovered : SimpleBoolFilterTest {

public:
    virtual ~FilterTestBiomeSnowCovered();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBiomeSnowCovered();
};
