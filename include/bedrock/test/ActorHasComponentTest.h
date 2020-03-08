#pragma once

#include "../../unmapped/FilterContext"


class ActorHasComponentTest : SimpleHashStringFilterTest {

public:
    ActorHasComponentTest::~ActorHasComponentTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasComponentTest(void);
};
