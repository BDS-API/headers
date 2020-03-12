#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleFloatFilterTest.h"


class FilterTestBrightness : SimpleFloatFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestBrightness();
    FilterTestBrightness();
};
