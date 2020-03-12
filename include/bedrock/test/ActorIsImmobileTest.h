#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsImmobileTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsImmobileTest();
    virtual void getName()const;
    ActorIsImmobileTest();
};
