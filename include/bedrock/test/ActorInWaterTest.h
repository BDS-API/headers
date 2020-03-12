#pragma once

#include "SimpleBoolFilterTest.h"


class ActorInWaterTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorInWaterTest();
    ActorInWaterTest();
};
