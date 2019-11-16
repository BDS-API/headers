#pragma once

class ActorHasMobEffect : FilterTest {

    virtual void ~ActorHasMobEffect();
    virtual void ~ActorHasMobEffect();
    virtual void setup(Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void _serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
