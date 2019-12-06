#pragma once

class ActorUndergroundTest : SimpleBoolFilterTest {

public:
    virtual ~ActorUndergroundTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorUndergroundTest(void);
};
