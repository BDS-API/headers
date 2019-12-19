#pragma once

class ActorInWaterOrRainTest : SimpleBoolFilterTest {

public:
    virtual ActorInWaterOrRainTest::~ActorInWaterOrRainTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorInWaterOrRainTest(void);
};
