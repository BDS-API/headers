#pragma once

#include "SimpleIntFilterTest.h"


class ActorHasAbilityTest : SimpleIntFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorHasAbilityTest();
    ActorHasAbilityTest();
};
