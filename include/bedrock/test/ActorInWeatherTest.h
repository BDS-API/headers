#pragma once

#include "../../unmapped/FilterContext.h"
#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class ActorInWeatherTest : FilterTest {

public:
    virtual void _serializeValue()const;
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorInWeatherTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ActorInWeatherTest();
};
