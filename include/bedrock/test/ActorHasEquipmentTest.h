#pragma once

#include "../../unmapped/FilterInputs"
#include "../../unmapped/FilterContext"
#include "../definition/Definition"


class ActorHasEquipmentTest : FilterTest {

public:
    ActorHasEquipmentTest::~ActorHasEquipmentTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeDomain()const;
    virtual void _serializeValue()const;

    ActorHasEquipmentTest(void);
};
