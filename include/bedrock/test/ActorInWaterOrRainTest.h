#pragma once

#include "SimpleBoolFilterTest.h"


class ActorInWaterOrRainTest : SimpleBoolFilterTest {

public:
    ~ActorInWaterOrRainTest(); // _ZN22ActorInWaterOrRainTestD2Ev
    virtual void evaluate(FilterContext const&)const; // _ZNK22ActorInWaterOrRainTest8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK22ActorInWaterOrRainTest7getNameEv
    ActorInWaterOrRainTest(); // _ZN22ActorInWaterOrRainTestC2Ev
};
