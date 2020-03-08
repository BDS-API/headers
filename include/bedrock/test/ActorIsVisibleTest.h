#pragma once

#include "../../unmapped/FilterContext"


class ActorIsVisibleTest : SimpleBoolFilterTest {

public:
    ActorIsVisibleTest::~ActorIsVisibleTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsVisibleTest(void);
};
