#pragma once

#include "../../unmapped/FilterContext"
#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class ActorHasMobEffect : FilterTest {

public:
    virtual ActorHasMobEffect::~ActorHasMobEffect()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeValue()const;

    ActorHasMobEffect(void);
};
