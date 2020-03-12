#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsColorTest : SimpleIntFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsColorTest();
    ActorIsColorTest();
};
