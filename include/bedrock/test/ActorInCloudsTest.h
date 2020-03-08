#pragma once

#include "../../unmapped/FilterContext"


class ActorInCloudsTest : SimpleBoolFilterTest {

public:
    ActorInCloudsTest::~ActorInCloudsTest()
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInCloudsTest(void);
};
