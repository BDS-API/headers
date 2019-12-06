#pragma once

class ActorIsSleepingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsSleepingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsSleepingTest(void);
};
