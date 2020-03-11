#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInWaterOrRainTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInWaterOrRainTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInWaterOrRainTest();
};
