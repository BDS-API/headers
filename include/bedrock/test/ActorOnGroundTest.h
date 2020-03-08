#pragma once

#include "../../unmapped/FilterContext"


class ActorOnGroundTest : SimpleBoolFilterTest {

public:
    ActorOnGroundTest::~ActorOnGroundTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorOnGroundTest(void);
};
