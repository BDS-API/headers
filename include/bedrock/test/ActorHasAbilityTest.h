#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorHasAbilityTest : SimpleIntFilterTest {

public:
    virtual ~ActorHasAbilityTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasAbilityTest();
};
