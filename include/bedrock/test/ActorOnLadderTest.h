#pragma once

#include "SimpleBoolFilterTest.h"


class ActorOnLadderTest : SimpleBoolFilterTest {

public:
    ~ActorOnLadderTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorOnLadderTest();
};
