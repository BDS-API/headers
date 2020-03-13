#pragma once

#include "SimpleFloatFilterTest.h"


class FilterTestDistanceToNearestPlayer : SimpleFloatFilterTest {

public:
    ~FilterTestDistanceToNearestPlayer(); // _ZN33FilterTestDistanceToNearestPlayerD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK33FilterTestDistanceToNearestPlayer8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK33FilterTestDistanceToNearestPlayer7getNameEv
    FilterTestDistanceToNearestPlayer(); // _ZN33FilterTestDistanceToNearestPlayerC2Ev
};
