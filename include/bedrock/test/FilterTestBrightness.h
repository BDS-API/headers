#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestBrightness : SimpleFloatFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~FilterTestBrightness();
    FilterTestBrightness();
};
