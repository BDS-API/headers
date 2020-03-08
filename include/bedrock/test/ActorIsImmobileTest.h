#pragma once

#include "../../unmapped/FilterContext"


class ActorIsImmobileTest : SimpleBoolFilterTest {

public:
    ActorIsImmobileTest::~ActorIsImmobileTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsImmobileTest(void);
};
