#pragma once

class ActorIsTargetTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsTargetTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorIsTargetTest(void);
};
