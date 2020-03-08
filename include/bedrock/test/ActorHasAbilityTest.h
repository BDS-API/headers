#pragma once

#include "../../unmapped/FilterContext"


class ActorHasAbilityTest : SimpleIntFilterTest {

public:
    virtual ActorHasAbilityTest::~ActorHasAbilityTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasAbilityTest(void);
};
