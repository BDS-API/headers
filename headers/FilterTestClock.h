#pragma once

class FilterTestClock : SimpleFloatFilterTest {

    virtual void FilterTestClock::~FilterTestClock();
    virtual void FilterTestClock::~FilterTestClock();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void _serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
