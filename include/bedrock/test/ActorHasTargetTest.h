#pragma once

class ActorHasTargetTest : SimpleBoolFilterTest {

public:
    virtual ActorHasTargetTest::~ActorHasTargetTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorHasTargetTest(void);
};