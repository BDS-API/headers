#pragma once

#include "./SimpleHashStringFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorIsFamilyTest : SimpleHashStringFilterTest {

public:
    virtual ~ActorIsFamilyTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsFamilyTest();
};
