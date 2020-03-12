#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsRidingTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorIsRidingTest();
    virtual void evaluate(FilterContext const&)const;
    ActorIsRidingTest();
};
