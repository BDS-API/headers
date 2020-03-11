#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsSleepingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsSleepingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsSleepingTest();
};
