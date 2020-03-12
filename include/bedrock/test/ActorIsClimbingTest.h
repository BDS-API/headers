#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsClimbingTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsClimbingTest();
    virtual void getName()const;
    ActorIsClimbingTest();
};
