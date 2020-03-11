#pragma once

#include "../../unmapped/FilterInputs.h"
#include "./FilterTest.h"
#include "../../unmapped/Definition.h"
#include "../../unmapped/FilterContext.h"


class ActorInWeatherTest : FilterTest {

public:
    virtual ~ActorInWeatherTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeValue()const;

    ActorInWeatherTest();
};
