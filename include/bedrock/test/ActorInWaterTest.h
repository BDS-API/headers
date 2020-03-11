#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInWaterTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInWaterTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInWaterTest();
};
