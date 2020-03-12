#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorOnLadderTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorOnLadderTest();
    ActorOnLadderTest();
};
