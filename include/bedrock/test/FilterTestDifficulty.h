#pragma once

#include "SimpleIntFilterTest.h"


class FilterTestDifficulty : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~FilterTestDifficulty();
    FilterTestDifficulty();
};
