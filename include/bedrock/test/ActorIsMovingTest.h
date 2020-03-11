#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsMovingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsMovingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsMovingTest();
};
