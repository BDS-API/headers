#pragma once

class ActorIsRidingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsRidingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsRidingTest(void);
};
