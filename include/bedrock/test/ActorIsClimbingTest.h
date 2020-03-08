#pragma once

#include "../../unmapped/FilterContext"


class ActorIsClimbingTest : SimpleBoolFilterTest {

public:
    ActorIsClimbingTest::~ActorIsClimbingTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsClimbingTest(void);
};
