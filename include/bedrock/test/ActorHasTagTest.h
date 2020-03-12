#pragma once

#include "SimpleHashStringFilterTest.h"


class ActorHasTagTest : SimpleHashStringFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorHasTagTest();
    ActorHasTagTest();
};
