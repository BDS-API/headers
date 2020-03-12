#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInWaterOrRainTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorInWaterOrRainTest();
    virtual void evaluate(FilterContext const&)const;
    ActorInWaterOrRainTest();
};
