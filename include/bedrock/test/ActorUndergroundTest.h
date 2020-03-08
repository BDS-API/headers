#pragma once

#include "../../unmapped/FilterContext"


class ActorUndergroundTest : SimpleBoolFilterTest {

public:
    ActorUndergroundTest::~ActorUndergroundTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorUndergroundTest(void);
};
