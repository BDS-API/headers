#pragma once

#include "../../unmapped/FilterContext"


class ActorIsOwnerTest : SimpleBoolFilterTest {

public:
    ActorIsOwnerTest::~ActorIsOwnerTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsOwnerTest(void);
};
