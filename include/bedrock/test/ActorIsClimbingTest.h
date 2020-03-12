#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsClimbingTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorIsClimbingTest();
    ActorIsClimbingTest();
};
