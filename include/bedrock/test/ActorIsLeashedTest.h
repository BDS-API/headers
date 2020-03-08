#pragma once

#include "../../unmapped/FilterContext"


class ActorIsLeashedTest : SimpleBoolFilterTest {

public:
    virtual ActorIsLeashedTest::~ActorIsLeashedTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsLeashedTest(void);
};
