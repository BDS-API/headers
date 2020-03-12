#pragma once

#include "SimpleBoolFilterTest.h"


class ActorOnGroundTest : SimpleBoolFilterTest {

public:
    ~ActorOnGroundTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorOnGroundTest();
};
