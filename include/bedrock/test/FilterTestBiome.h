#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestBiome : SimpleIntFilterTest {

public:
    ~FilterTestBiome();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    FilterTestBiome();
};
