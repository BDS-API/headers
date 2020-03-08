#pragma once

#include "../../unmapped/FilterContext"


class ActorOnLadderTest : SimpleBoolFilterTest {

public:
    virtual ActorOnLadderTest::~ActorOnLadderTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorOnLadderTest(void);
};
