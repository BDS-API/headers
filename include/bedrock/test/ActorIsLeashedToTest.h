#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsLeashedToTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsLeashedToTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsLeashedToTest();
};
