#pragma once

#include "SimpleHashStringFilterTest.h"


class ActorHasComponentTest : SimpleHashStringFilterTest {

public:
    ~ActorHasComponentTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorHasComponentTest();
};
