#pragma once

#include "./SimpleFloatFilterTest.h"
#include "../../unmapped/FilterContext.h"


class FilterTestDistanceToNearestPlayer : SimpleFloatFilterTest {

public:
    virtual ~FilterTestDistanceToNearestPlayer();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    FilterTestDistanceToNearestPlayer();
};
