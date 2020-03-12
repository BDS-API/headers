#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInCaravanTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorInCaravanTest();
    virtual void getName()const;
    ActorInCaravanTest();
};
