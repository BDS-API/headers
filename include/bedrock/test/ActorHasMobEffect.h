#pragma once

#include "FilterTest.h"


class ActorHasMobEffect : FilterTest {

public:
    ~ActorHasMobEffect();
    virtual void _serializeValue()const;
    virtual void evaluate(FilterContext const&)const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void getName()const;
    ActorHasMobEffect();
};
