#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsRidingTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsRidingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsRidingTest();
};
