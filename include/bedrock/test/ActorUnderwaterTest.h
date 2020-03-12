#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorUnderwaterTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorUnderwaterTest();
    ActorUnderwaterTest();
};
