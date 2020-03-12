#pragma once

#include "SimpleTagIDFilterTest.h"


class FilterTestBiomeHasTag : SimpleTagIDFilterTest {

public:
    ~FilterTestBiomeHasTag();
    virtual void getName()const;
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    FilterTestBiomeHasTag();
    void _evalBiome(Biome const&, FilterContext const&)const;
};
