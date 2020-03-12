#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsMovingTest : SimpleBoolFilterTest {

public:
    ~ActorIsMovingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorIsMovingTest();
};
