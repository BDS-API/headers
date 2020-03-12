#pragma once

#include "SimpleBoolFilterTest.h"


class ActorUndergroundTest : SimpleBoolFilterTest {

public:
    ~ActorUndergroundTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorUndergroundTest();
};
