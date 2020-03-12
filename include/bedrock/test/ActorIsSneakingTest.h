#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsSneakingTest : SimpleBoolFilterTest {

public:
    ~ActorIsSneakingTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorIsSneakingTest();
};
