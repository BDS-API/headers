#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsLeashedTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsLeashedTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsLeashedTest();
};
