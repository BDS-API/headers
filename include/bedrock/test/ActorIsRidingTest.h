#pragma once

class ActorIsRidingTest : SimpleBoolFilterTest {

public:
    virtual ActorIsRidingTest::~ActorIsRidingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsRidingTest(void);
};
