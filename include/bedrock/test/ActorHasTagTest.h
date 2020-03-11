#pragma once

#include "./SimpleHashStringFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorHasTagTest : SimpleHashStringFilterTest {

public:
    virtual ~ActorHasTagTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasTagTest();
};
