#pragma once

class ActorInWaterTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInWaterTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorInWaterTest(void);
};
