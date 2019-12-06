#pragma once

class ActorInWaterOrRainTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInWaterOrRainTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorInWaterOrRainTest(void);
};
