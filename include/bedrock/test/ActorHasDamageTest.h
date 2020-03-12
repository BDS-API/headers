#pragma once

#include "SimpleIntFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorHasDamageTest : SimpleIntFilterTest {

public:
    virtual void getName()const;
    ~ActorHasDamageTest();
    virtual void evaluate(FilterContext const&)const;
    ActorHasDamageTest();
};
