#pragma once

class ActorTrustsSubjectTest : SimpleBoolFilterTest {

    virtual void ~ActorTrustsSubjectTest();
    virtual void ~ActorTrustsSubjectTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void FilterTest::finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void FilterTest::_serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
