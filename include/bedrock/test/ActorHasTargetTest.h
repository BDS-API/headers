#pragma once

#include "../../unmapped/FilterContext"


class ActorHasTargetTest : SimpleBoolFilterTest {

public:
    ActorHasTargetTest::~ActorHasTargetTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasTargetTest(void);
};
