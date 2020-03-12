#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInLavaTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorInLavaTest();
    ActorInLavaTest();
};
