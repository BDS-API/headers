#pragma once

#include "./SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInCloudsTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInCloudsTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;

    ActorInCloudsTest();
};
