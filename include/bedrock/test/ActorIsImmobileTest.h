#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsImmobileTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsImmobileTest();
    virtual void getName()const;
    ActorIsImmobileTest();
};
