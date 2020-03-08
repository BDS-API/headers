#pragma once

#include "../../unmapped/FilterContext"


class ActorInWaterTest : SimpleBoolFilterTest {

public:
    ActorInWaterTest::~ActorInWaterTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInWaterTest(void);
};
