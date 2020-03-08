#pragma once

#include "../../unmapped/FilterContext"
#include "../definition/Definition"


class ActorInWeatherTest : FilterTest {

public:
    virtual ActorInWeatherTest::~ActorInWeatherTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;
    virtual void _serializeValue(void)const;

    ActorInWeatherTest(void);
};
