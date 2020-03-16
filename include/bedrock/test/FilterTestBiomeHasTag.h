#pragma once

#include "SimpleTagIDFilterTest.h"


class FilterTestBiomeHasTag : public SimpleTagIDFilterTest {

public:
    virtual ~FilterTestBiomeHasTag(); // _ZN21FilterTestBiomeHasTagD2Ev
    virtual void __fake_function0(); // fake
    virtual void evaluate(FilterContext const&)const; // _ZNK21FilterTestBiomeHasTag8evaluateERK13FilterContext
    virtual void finalizeParsedValue(IWorldRegistriesProvider &); // _ZN21FilterTestBiomeHasTag19finalizeParsedValueER24IWorldRegistriesProvider
    virtual void getName()const; // _ZNK21FilterTestBiomeHasTag7getNameEv
    FilterTestBiomeHasTag(); // _ZN21FilterTestBiomeHasTagC2Ev
    void _evalBiome(Biome const&, FilterContext const&)const; // _ZNK21FilterTestBiomeHasTag10_evalBiomeERK5BiomeRK13FilterContext
};
