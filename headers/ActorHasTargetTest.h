#pragma once

class ActorHasTargetTest : SimpleBoolFilterTest {

public:
    virtual ~ActorHasTargetTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorHasTargetTest(void);
};
