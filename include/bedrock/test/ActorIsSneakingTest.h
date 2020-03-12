#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsSneakingTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorIsSneakingTest();
    ActorIsSneakingTest();
};
