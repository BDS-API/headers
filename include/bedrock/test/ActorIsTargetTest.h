#pragma once

#include "../../unmapped/FilterContext"


class ActorIsTargetTest : SimpleBoolFilterTest {

public:
    virtual ActorIsTargetTest::~ActorIsTargetTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsTargetTest(void);
};
