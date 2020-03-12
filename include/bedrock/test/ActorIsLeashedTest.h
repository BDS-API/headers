#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsLeashedTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorIsLeashedTest();
    virtual void evaluate(FilterContext const&)const;
    ActorIsLeashedTest();
};
