#pragma once

class ActorIsSleepingTest : SimpleBoolFilterTest {

public:
    virtual ActorIsSleepingTest::~ActorIsSleepingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsSleepingTest(void);
};
