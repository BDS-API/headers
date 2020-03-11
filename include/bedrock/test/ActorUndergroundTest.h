#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorUndergroundTest : SimpleBoolFilterTest {

public:
    virtual ~ActorUndergroundTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorUndergroundTest();
};
