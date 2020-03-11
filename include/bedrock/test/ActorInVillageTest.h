#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInVillageTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInVillageTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInVillageTest();
};
