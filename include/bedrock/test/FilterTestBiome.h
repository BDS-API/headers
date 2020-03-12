#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBiome : SimpleIntFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestBiome();
    FilterTestBiome();
};
