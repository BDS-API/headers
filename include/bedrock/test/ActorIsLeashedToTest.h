#pragma once

class ActorIsLeashedToTest : SimpleBoolFilterTest {

public:
    virtual ActorIsLeashedToTest::~ActorIsLeashedToTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsLeashedToTest(void);
};
