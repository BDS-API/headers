#pragma once

#include "../../unmapped/FilterInputs"
#include "../../unmapped/FilterContext"
#include "../definition/Definition"


class ActorHasMobEffect : FilterTest {

public:
    ActorHasMobEffect::~ActorHasMobEffect()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeValue()const;

    ActorHasMobEffect(void);
};
