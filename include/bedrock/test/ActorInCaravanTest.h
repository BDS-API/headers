#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInCaravanTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInCaravanTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInCaravanTest();
};
