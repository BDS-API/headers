#pragma once

#include "../../unmapped/FilterContext"


class ActorInVillageTest : SimpleBoolFilterTest {

public:
    virtual ActorInVillageTest::~ActorInVillageTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInVillageTest(void);
};
