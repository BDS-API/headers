#pragma once

#include "../../unmapped/FilterContext"


class ActorHasDamageTest : SimpleIntFilterTest {

public:
    ActorHasDamageTest::~ActorHasDamageTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasDamageTest(void);
};
