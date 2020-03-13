#pragma once

#include "FilterTest.h"


class ActorInWeatherTest : FilterTest {

public:
    ~ActorInWeatherTest(); // _ZN18ActorInWeatherTestD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN18ActorInWeatherTest5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void evaluate(FilterContext const&)const; // _ZNK18ActorInWeatherTest8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK18ActorInWeatherTest7getNameEv
    virtual void _serializeValue()const; // _ZNK18ActorInWeatherTest15_serializeValueEv
    ActorInWeatherTest(); // _ZN18ActorInWeatherTestC2Ev
};
