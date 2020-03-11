#pragma once

#include "./SimpleHashStringFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorHasComponentTest : SimpleHashStringFilterTest {

public:
    virtual ~ActorHasComponentTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasComponentTest();
};
