#pragma once

#include "SimpleIntFilterTest.h"


class ActorIsColorTest : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsColorTest();
    virtual void getName()const;
    ActorIsColorTest();
};
