#pragma once

class ActorIsSneakingTest : SimpleBoolFilterTest {

public:
    virtual ActorIsSneakingTest::~ActorIsSneakingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsSneakingTest(void);
};
