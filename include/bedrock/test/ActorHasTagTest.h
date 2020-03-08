#pragma once

#include "../../unmapped/FilterContext"


class ActorHasTagTest : SimpleHashStringFilterTest {

public:
    ActorHasTagTest::~ActorHasTagTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasTagTest(void);
};
