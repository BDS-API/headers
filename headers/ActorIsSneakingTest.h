#pragma once

class ActorIsSneakingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsSneakingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsSneakingTest(void);
};
