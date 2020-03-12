#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsLeashedToTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorIsLeashedToTest();
    virtual void evaluate(FilterContext const&)const;
    ActorIsLeashedToTest();
};
