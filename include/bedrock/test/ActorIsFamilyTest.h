#pragma once

#include "SimpleHashStringFilterTest.h"


class ActorIsFamilyTest : SimpleHashStringFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorIsFamilyTest();
    ActorIsFamilyTest();
};
