#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsAvoidingMobsTest : SimpleBoolFilterTest {

public:
    virtual ~ActorIsAvoidingMobsTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsAvoidingMobsTest();
};
