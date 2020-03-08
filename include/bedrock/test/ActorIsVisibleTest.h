#pragma once

#include "../../unmapped/FilterContext"


class ActorIsVisibleTest : SimpleBoolFilterTest {

public:
    virtual ActorIsVisibleTest::~ActorIsVisibleTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsVisibleTest(void);
};
