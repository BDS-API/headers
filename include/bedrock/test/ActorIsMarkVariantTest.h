#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsMarkVariantTest : SimpleIntFilterTest {

public:
    ~ActorIsMarkVariantTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorIsMarkVariantTest();
};
