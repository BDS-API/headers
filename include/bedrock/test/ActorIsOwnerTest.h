#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsOwnerTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsOwnerTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsOwnerTest();
};
