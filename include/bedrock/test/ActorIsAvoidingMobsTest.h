#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsAvoidingMobsTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsAvoidingMobsTest();
    ActorIsAvoidingMobsTest();
};
