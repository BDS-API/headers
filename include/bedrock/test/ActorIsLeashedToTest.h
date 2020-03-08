#pragma once

#include "../../unmapped/FilterContext"


class ActorIsLeashedToTest : SimpleBoolFilterTest {

public:
    virtual ActorIsLeashedToTest::~ActorIsLeashedToTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsLeashedToTest(void);
};
