#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestDifficulty : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~FilterTestDifficulty();
    virtual void getName()const;
    FilterTestDifficulty();
};
