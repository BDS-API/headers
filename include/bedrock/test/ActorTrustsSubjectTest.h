#pragma once

#include "SimpleBoolFilterTest.h"


class ActorTrustsSubjectTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorTrustsSubjectTest();
    virtual void evaluate(FilterContext const&)const;
    ActorTrustsSubjectTest();
};
