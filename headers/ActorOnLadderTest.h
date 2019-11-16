#pragma once

class ActorOnLadderTest : SimpleBoolFilterTest {

    virtual void ~ActorOnLadderTest();
    virtual void ~ActorOnLadderTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void FilterTest::finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void FilterTest::_serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
