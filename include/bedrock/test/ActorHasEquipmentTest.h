#pragma once

#include "../../unmapped/FilterContext.h"
#include "FilterTest.h"
#include "../../unmapped/FilterInputs.h"


class ActorHasEquipmentTest : FilterTest {

public:
    virtual void _serializeValue()const;
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    virtual void _serializeDomain()const;
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    ~ActorHasEquipmentTest();
    ActorHasEquipmentTest();
};
