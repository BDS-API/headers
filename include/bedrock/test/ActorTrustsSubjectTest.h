#pragma once

#include "../../unmapped/FilterContext"


class ActorTrustsSubjectTest : SimpleBoolFilterTest {

public:
    virtual ActorTrustsSubjectTest::~ActorTrustsSubjectTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorTrustsSubjectTest(void);
};
