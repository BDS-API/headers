#pragma once

#include "SimpleBoolFilterTest.h"


class ActorInCaravanTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorInCaravanTest();
    virtual void evaluate(FilterContext const&)const;
    ActorInCaravanTest();
};
