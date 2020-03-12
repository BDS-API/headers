#pragma once

#include "SimpleBoolFilterTest.h"


class ActorHasTargetTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorHasTargetTest();
    virtual void evaluate(FilterContext const&)const;
    ActorHasTargetTest();
};
