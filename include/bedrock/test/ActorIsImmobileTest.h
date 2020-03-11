#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsImmobileTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsImmobileTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsImmobileTest();
};
