#pragma once

#include "SimpleBoolFilterTest.h"


class ActorInLavaTest : SimpleBoolFilterTest {

public:
    ~ActorInLavaTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorInLavaTest();
};
