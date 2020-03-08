#pragma once

#include "../../unmapped/FilterContext"


class ActorHasDamageTest : SimpleIntFilterTest {

public:
    virtual ActorHasDamageTest::~ActorHasDamageTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorHasDamageTest(void);
};
