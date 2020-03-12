#pragma once

#include "SimpleIntFilterTest.h"


class ActorIsMarkVariantTest : SimpleIntFilterTest {

public:
    virtual void getName()const;
    ~ActorIsMarkVariantTest();
    virtual void evaluate(FilterContext const&)const;
    ActorIsMarkVariantTest();
};
