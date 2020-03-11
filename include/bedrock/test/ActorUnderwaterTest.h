#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorUnderwaterTest : SimpleBoolFilterTest {

public:
    virtual ~ActorUnderwaterTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorUnderwaterTest();
};
