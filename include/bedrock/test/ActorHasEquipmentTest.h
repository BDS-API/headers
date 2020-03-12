#pragma once

#include "FilterTest.h"


class ActorHasEquipmentTest : FilterTest {

public:
    virtual void _serializeDomain()const;
    virtual void _serializeValue()const;
    virtual void evaluate(FilterContext const&)const;
    ~ActorHasEquipmentTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void getName()const;
    ActorHasEquipmentTest();
};
