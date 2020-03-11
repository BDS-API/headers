#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorRiderCountTest : SimpleIntFilterTest {

public:
    virtual ~ActorRiderCountTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorRiderCountTest();
};
