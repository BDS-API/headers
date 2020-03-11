#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsSneakingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsSneakingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsSneakingTest();
};
