#pragma once

class ActorUndergroundTest : SimpleBoolFilterTest {

public:
    virtual ActorUndergroundTest::~ActorUndergroundTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorUndergroundTest(void);
};
