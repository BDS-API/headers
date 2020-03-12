#pragma once

#include "../../unmapped/FilterContext.h"
#include "SimpleHashStringFilterTest.h"


class ActorIsFamilyTest : SimpleHashStringFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorIsFamilyTest();
    virtual void getName()const;
    ActorIsFamilyTest();
};
