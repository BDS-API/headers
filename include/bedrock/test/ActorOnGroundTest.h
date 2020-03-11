#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorOnGroundTest : SimpleBoolFilterTest {

public:
    virtual ~ActorOnGroundTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorOnGroundTest();
};
