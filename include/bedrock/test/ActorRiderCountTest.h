#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorRiderCountTest : SimpleIntFilterTest {

public:
    virtual void getName()const;
    ~ActorRiderCountTest();
    virtual void evaluate(FilterContext const&)const;
    ActorRiderCountTest();
};
