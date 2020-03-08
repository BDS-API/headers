#pragma once

#include "../../unmapped/FilterContext"


class ActorOnGroundTest : SimpleBoolFilterTest {

public:
    virtual ActorOnGroundTest::~ActorOnGroundTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorOnGroundTest(void);
};
