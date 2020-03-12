#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsTargetTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsTargetTest();
    virtual void getName()const;
    ActorIsTargetTest();
};
