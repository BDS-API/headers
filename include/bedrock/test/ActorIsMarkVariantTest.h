#pragma once

#include "../../unmapped/FilterContext"


class ActorIsMarkVariantTest : SimpleIntFilterTest {

public:
    ActorIsMarkVariantTest::~ActorIsMarkVariantTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsMarkVariantTest(void);
};
