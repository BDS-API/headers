#pragma once

#include "SimpleBoolFilterTest.h"


class ActorIsAvoidingMobsTest : SimpleBoolFilterTest {

public:
    ~ActorIsAvoidingMobsTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ActorIsAvoidingMobsTest();
};
