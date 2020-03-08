#pragma once

#include "../../unmapped/FilterContext"


class ActorUndergroundTest : SimpleBoolFilterTest {

public:
    virtual ActorUndergroundTest::~ActorUndergroundTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorUndergroundTest(void);
};
