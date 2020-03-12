#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsLeashedTest : SimpleBoolFilterTest {

public:
    ~ActorIsLeashedTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorIsLeashedTest();
};
