#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsColorTest : SimpleIntFilterTest {

public:
    virtual ~ActorIsColorTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsColorTest();
};
