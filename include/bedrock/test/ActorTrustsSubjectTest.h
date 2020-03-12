#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorTrustsSubjectTest : SimpleBoolFilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    ~ActorTrustsSubjectTest();
    virtual void getName()const;
    ActorTrustsSubjectTest();
};
