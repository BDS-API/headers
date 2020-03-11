#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestDifficulty : SimpleIntFilterTest {

public:
    virtual ~FilterTestDifficulty();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestDifficulty();
};
