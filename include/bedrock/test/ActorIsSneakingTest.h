#pragma once

#include "../../unmapped/FilterContext"


class ActorIsSneakingTest : SimpleBoolFilterTest {

public:
    virtual ActorIsSneakingTest::~ActorIsSneakingTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsSneakingTest(void);
};
