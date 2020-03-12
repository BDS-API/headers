#pragma once

#include "SimpleBoolFilterTest.h"


class ActorUnderwaterTest : SimpleBoolFilterTest {

public:
    ~ActorUnderwaterTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorUnderwaterTest();
};
