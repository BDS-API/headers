#pragma once

#include "../../unmapped/FilterContext"


class ActorIsFamilyTest : SimpleHashStringFilterTest {

public:
    ActorIsFamilyTest::~ActorIsFamilyTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsFamilyTest(void);
};
