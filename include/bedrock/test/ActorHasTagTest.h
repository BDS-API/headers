#pragma once

#include "../../unmapped/FilterContext"


class ActorHasTagTest : SimpleHashStringFilterTest {

public:
    virtual ActorHasTagTest::~ActorHasTagTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorHasTagTest(void);
};
