#pragma once

#include "FilterTest.h"


class ActorHasMobEffect : FilterTest {

public:
    ~ActorHasMobEffect(); // _ZN17ActorHasMobEffectD2Ev
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN17ActorHasMobEffect5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void evaluate(FilterContext const&)const; // _ZNK17ActorHasMobEffect8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK17ActorHasMobEffect7getNameEv
    virtual void _serializeValue()const; // _ZNK17ActorHasMobEffect15_serializeValueEv
    ActorHasMobEffect(); // _ZN17ActorHasMobEffectC2Ev
};
