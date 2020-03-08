#pragma once

#include "../../unmapped/FilterContext"


class ActorIsFamilyTest : SimpleHashStringFilterTest {

public:
    virtual ActorIsFamilyTest::~ActorIsFamilyTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsFamilyTest(void);
};
