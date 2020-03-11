#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestDaytime : SimpleBoolFilterTest {

public:
    virtual ~FilterTestDaytime();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestDaytime();
};
