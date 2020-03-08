#pragma once

#include "../../unmapped/FilterContext"


class ActorIsRidingTest : SimpleBoolFilterTest {

public:
    virtual ActorIsRidingTest::~ActorIsRidingTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsRidingTest(void);
};
