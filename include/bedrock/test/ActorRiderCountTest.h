#pragma once

#include "../../unmapped/FilterContext"


class ActorRiderCountTest : SimpleIntFilterTest {

public:
    ActorRiderCountTest::~ActorRiderCountTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorRiderCountTest(void);
};
