#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBiomeHumid : SimpleBoolFilterTest {

public:
    ~FilterTestBiomeHumid();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    FilterTestBiomeHumid();
};
