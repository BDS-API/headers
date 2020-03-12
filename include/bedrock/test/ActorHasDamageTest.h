#pragma once

#include "SimpleIntFilterTest.h"


class ActorHasDamageTest : SimpleIntFilterTest {

public:
    ~ActorHasDamageTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorHasDamageTest();
};
