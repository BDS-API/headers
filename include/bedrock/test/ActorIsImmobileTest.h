#pragma once

#include "../../unmapped/FilterContext"


class ActorIsImmobileTest : SimpleBoolFilterTest {

public:
    virtual ActorIsImmobileTest::~ActorIsImmobileTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsImmobileTest(void);
};
