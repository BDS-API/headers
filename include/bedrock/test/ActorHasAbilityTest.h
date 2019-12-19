#pragma once

class ActorHasAbilityTest : SimpleIntFilterTest {

public:
    virtual ActorHasAbilityTest::~ActorHasAbilityTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorHasAbilityTest(void);
};
