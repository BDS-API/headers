#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsSleepingTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsSleepingTest();
    virtual void getName()const;
    ActorIsSleepingTest();
};
