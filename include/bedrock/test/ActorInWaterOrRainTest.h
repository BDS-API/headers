#pragma once

#include "SimpleBoolFilterTest.h"


class ActorInWaterOrRainTest : SimpleBoolFilterTest {

public:
    ~ActorInWaterOrRainTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorInWaterOrRainTest();
};
