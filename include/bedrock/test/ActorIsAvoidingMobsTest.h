#pragma once

#include "../../unmapped/FilterContext"


class ActorIsAvoidingMobsTest : SimpleBoolFilterTest {

public:
    ActorIsAvoidingMobsTest::~ActorIsAvoidingMobsTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsAvoidingMobsTest(void);
};
