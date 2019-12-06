#pragma once

class ActorHasAbilityTest : SimpleIntFilterTest {

public:
    virtual ~ActorHasAbilityTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorHasAbilityTest(void);
};
