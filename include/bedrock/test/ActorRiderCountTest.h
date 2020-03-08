#pragma once

#include "../../unmapped/FilterContext"


class ActorRiderCountTest : SimpleIntFilterTest {

public:
    virtual ActorRiderCountTest::~ActorRiderCountTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorRiderCountTest(void);
};
