#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleHashStringFilterTest.h"


class ActorHasTagTest : SimpleHashStringFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorHasTagTest();
    ActorHasTagTest();
};
