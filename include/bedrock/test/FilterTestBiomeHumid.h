#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    virtual ~FilterTestBiomeHumid();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBiomeHumid();
};
