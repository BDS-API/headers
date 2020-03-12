#pragma once

#include "SimpleIntFilterTest.h"


class ActorRiderCountTest : SimpleIntFilterTest {

public:
    virtual void getName()const;
    ~ActorRiderCountTest();
    virtual void evaluate(FilterContext const&)const;
    ActorRiderCountTest();
};
