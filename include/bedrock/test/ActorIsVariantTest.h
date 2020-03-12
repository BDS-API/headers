#pragma once

#include "SimpleIntFilterTest.h"


class ActorIsVariantTest : SimpleIntFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsVariantTest();
    ActorIsVariantTest();
};
