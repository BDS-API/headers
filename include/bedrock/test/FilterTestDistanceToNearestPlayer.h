#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestDistanceToNearestPlayer : SimpleFloatFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~FilterTestDistanceToNearestPlayer();
    FilterTestDistanceToNearestPlayer();
};
