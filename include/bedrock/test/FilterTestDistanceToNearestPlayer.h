#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleFloatFilterTest.h"


class FilterTestDistanceToNearestPlayer : SimpleFloatFilterTest {

public:
    virtual void getName()const;
    ~FilterTestDistanceToNearestPlayer();
    virtual void evaluate(FilterContext const&)const;
    FilterTestDistanceToNearestPlayer();
};
