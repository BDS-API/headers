#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsVisibleTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsVisibleTest();
    ActorIsVisibleTest();
};
