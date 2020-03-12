#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsLeashedToTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorIsLeashedToTest();
    virtual void evaluate(FilterContext const&)const;
    ActorIsLeashedToTest();
};
