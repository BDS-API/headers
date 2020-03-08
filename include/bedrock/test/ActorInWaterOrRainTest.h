#pragma once

#include "../../unmapped/FilterContext"


class ActorInWaterOrRainTest : SimpleBoolFilterTest {

public:
    virtual ActorInWaterOrRainTest::~ActorInWaterOrRainTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInWaterOrRainTest(void);
};
