#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleHashStringFilterTest.h"


class ActorHasComponentTest : SimpleHashStringFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorHasComponentTest();
    ActorHasComponentTest();
};
