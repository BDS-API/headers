#pragma once

#include "FilterTest.h"


class ActorHasEquipmentTest : public FilterTest {

public:
    virtual ~ActorHasEquipmentTest(); // _ZN21ActorHasEquipmentTestD2Ev
    virtual void __fake_function0(); // fake
    virtual void setup(FilterTest::Definition const&, FilterInputs const&); // _ZN21ActorHasEquipmentTest5setupERKN10FilterTest10DefinitionERK12FilterInputs
    virtual void evaluate(FilterContext const&)const; // _ZNK21ActorHasEquipmentTest8evaluateERK13FilterContext
    virtual void getName()const; // _ZNK21ActorHasEquipmentTest7getNameEv
    virtual void _serializeDomain()const; // _ZNK21ActorHasEquipmentTest16_serializeDomainEv
    virtual void _serializeValue()const; // _ZNK21ActorHasEquipmentTest15_serializeValueEv
    ActorHasEquipmentTest(); // _ZN21ActorHasEquipmentTestC2Ev
};
