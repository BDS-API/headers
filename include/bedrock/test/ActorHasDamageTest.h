#pragma once

#include "./SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorHasDamageTest : SimpleIntFilterTest {

public:
    virtual ~ActorHasDamageTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasDamageTest();
};
