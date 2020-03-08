#pragma once

#include "../../unmapped/FilterContext"


class ActorIsMovingTest : SimpleBoolFilterTest {

public:
    ActorIsMovingTest::~ActorIsMovingTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsMovingTest(void);
};
