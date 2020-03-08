#pragma once

#include "../../unmapped/FilterContext"


class ActorHasAbilityTest : SimpleIntFilterTest {

public:
    ActorHasAbilityTest::~ActorHasAbilityTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasAbilityTest(void);
};
