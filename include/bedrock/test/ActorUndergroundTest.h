#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorUndergroundTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorUndergroundTest();
    virtual void getName()const;
    ActorUndergroundTest();
};
