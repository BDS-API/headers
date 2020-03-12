#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsOwnerTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsOwnerTest();
    ActorIsOwnerTest();
};
