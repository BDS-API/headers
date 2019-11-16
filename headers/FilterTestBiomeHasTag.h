#pragma once

class FilterTestBiomeHasTag : SimpleTagIDFilterTest {

    virtual void ~FilterTestBiomeHasTag();
    virtual void ~FilterTestBiomeHasTag();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void FilterTest::_serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
