#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorHasTargetTest : SimpleBoolFilterTest {

public:
    virtual ~ActorHasTargetTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasTargetTest();
};
