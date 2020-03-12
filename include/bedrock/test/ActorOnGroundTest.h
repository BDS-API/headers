#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorOnGroundTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorOnGroundTest();
    ActorOnGroundTest();
};
