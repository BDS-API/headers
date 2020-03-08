#pragma once

#include "../../unmapped/FilterContext"


class ActorInLavaTest : SimpleBoolFilterTest {

public:
    ActorInLavaTest::~ActorInLavaTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInLavaTest(void);
};
