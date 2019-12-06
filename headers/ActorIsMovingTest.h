#pragma once

class ActorIsMovingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsMovingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsMovingTest(void);
};
