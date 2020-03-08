#pragma once

#include "../../unmapped/FilterContext"
#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class ActorInWeatherTest : FilterTest {

public:
    virtual ActorInWeatherTest::~ActorInWeatherTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeValue()const;

    ActorInWeatherTest(void);
};
