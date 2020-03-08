#pragma once

#include "../../unmapped/FilterContext"
#include "../definition/Definition"


class ActorHasEquipmentTest : FilterTest {

public:
    virtual ActorHasEquipmentTest::~ActorHasEquipmentTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;
    virtual void _serializeDomain(void)const;
    virtual void _serializeValue(void)const;

    ActorHasEquipmentTest(void);
};
