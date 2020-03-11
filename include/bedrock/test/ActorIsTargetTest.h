#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsTargetTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsTargetTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsTargetTest();
};
