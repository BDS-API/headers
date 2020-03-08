#pragma once

#include "../../unmapped/FilterContext"


class ActorIsColorTest : SimpleIntFilterTest {

public:
    ActorIsColorTest::~ActorIsColorTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorIsColorTest(void);
};
