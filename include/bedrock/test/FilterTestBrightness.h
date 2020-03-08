#pragma once

#include "../../unmapped/FilterContext"


class FilterTestBrightness : SimpleFloatFilterTest {

public:
    virtual FilterTestBrightness::~FilterTestBrightness()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBrightness(void);
};
