#pragma once

class ActorIsLeashedToTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsLeashedToTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsLeashedToTest(void);
};
