#pragma once

#include "../../unmapped/FilterContext"


class ActorIsVariantTest : SimpleIntFilterTest {

public:
    ActorIsVariantTest::~ActorIsVariantTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsVariantTest(void);
};
