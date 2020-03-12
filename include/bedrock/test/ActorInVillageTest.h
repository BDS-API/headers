#pragma once

#include "SimpleBoolFilterTest.h"


class ActorInVillageTest : SimpleBoolFilterTest {

public:
    ~ActorInVillageTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorInVillageTest();
};
