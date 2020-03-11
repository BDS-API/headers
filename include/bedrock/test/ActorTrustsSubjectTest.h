#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorTrustsSubjectTest : SimpleBoolFilterTest {

public:
    virtual ~ActorTrustsSubjectTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorTrustsSubjectTest();
};
