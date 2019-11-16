#pragma once

class ActorIsRidingTest : SimpleBoolFilterTest {

    virtual void ActorIsRidingTest::~ActorIsRidingTest();
    virtual void ActorIsRidingTest::~ActorIsRidingTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void _serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
