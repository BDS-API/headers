#pragma once

#include "../../unmapped/FilterContext"


class ActorInWaterTest : SimpleBoolFilterTest {

public:
    virtual ActorInWaterTest::~ActorInWaterTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInWaterTest(void);
};
