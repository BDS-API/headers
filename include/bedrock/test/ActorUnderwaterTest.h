#pragma once

#include "../../unmapped/FilterContext"


class ActorUnderwaterTest : SimpleBoolFilterTest {

public:
    virtual ActorUnderwaterTest::~ActorUnderwaterTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorUnderwaterTest(void);
};
