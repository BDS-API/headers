#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsVisibleTest : SimpleBoolFilterTest {

public:
    ~ActorIsVisibleTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorIsVisibleTest();
};
