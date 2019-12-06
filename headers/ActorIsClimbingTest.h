#pragma once

class ActorIsClimbingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsClimbingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsClimbingTest(void);
};
