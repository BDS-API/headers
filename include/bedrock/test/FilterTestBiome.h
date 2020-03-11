#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBiome : SimpleIntFilterTest {

public:
    virtual ~FilterTestBiome();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestBiome();
};
