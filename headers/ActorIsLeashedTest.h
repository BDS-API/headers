#pragma once

class ActorIsLeashedTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsLeashedTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsLeashedTest(void);
};
