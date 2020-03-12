#pragma once

#include "../../unmapped/FilterContext.h"
#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class ActorHasMobEffect : FilterTest {

public:
    virtual void evaluate(FilterContext const&)const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~ActorHasMobEffect();
    virtual void getName()const;
    virtual void _serializeValue()const;
    ActorHasMobEffect();
};
