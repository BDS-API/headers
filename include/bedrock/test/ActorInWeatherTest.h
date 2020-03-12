#pragma once

#include "FilterTest.h"


class ActorInWeatherTest : FilterTest {

public:
    virtual void _serializeValue()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    ~ActorInWeatherTest();
    ActorInWeatherTest();
};
