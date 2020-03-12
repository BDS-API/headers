#pragma once

#include "SimpleBoolFilterTest.h"
#include "../../unmapped/FilterContext.h"


class ActorInCloudsTest : SimpleBoolFilterTest {

public:
    ~ActorInCloudsTest();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ActorInCloudsTest();
};
