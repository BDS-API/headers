#pragma once

#include "../../unmapped/FilterContext"


class ActorInCaravanTest : SimpleBoolFilterTest {

public:
    ActorInCaravanTest::~ActorInCaravanTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInCaravanTest(void);
};
