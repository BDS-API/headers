#pragma once

#include "../../unmapped/FilterContext"


class ActorIsLeashedToTest : SimpleBoolFilterTest {

public:
    ActorIsLeashedToTest::~ActorIsLeashedToTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsLeashedToTest(void);
};
