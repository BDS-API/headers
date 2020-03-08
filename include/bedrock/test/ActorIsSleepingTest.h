#pragma once

#include "../../unmapped/FilterContext"


class ActorIsSleepingTest : SimpleBoolFilterTest {

public:
    ActorIsSleepingTest::~ActorIsSleepingTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsSleepingTest(void);
};
