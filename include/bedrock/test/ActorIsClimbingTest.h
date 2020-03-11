#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsClimbingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsClimbingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsClimbingTest();
};
