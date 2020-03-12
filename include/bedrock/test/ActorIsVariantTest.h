#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsVariantTest : SimpleIntFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorIsVariantTest();
    ActorIsVariantTest();
};
