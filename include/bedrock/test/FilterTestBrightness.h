#pragma once

#include "./SimpleFloatFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBrightness : SimpleFloatFilterTest {

public:
    virtual ~FilterTestBrightness();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBrightness();
};
