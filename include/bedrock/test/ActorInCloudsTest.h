#pragma once

#include "SimpleBoolFilterTest.h"


class ActorInCloudsTest : SimpleBoolFilterTest {

public:
    virtual void getName()const;
    ~ActorInCloudsTest();
    virtual void evaluate(FilterContext const&)const;
    ActorInCloudsTest();
};
