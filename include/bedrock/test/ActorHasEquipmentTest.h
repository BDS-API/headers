#pragma once

#include "../../unmapped/FilterContext"
#include "../definition/Definition"
#include "../../unmapped/FilterInputs"


class ActorHasEquipmentTest : FilterTest {

public:
    virtual ActorHasEquipmentTest::~ActorHasEquipmentTest()
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void _serializeDomain()const;
    virtual void _serializeValue()const;

    ActorHasEquipmentTest(void);
};
