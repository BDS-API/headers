#pragma once

#include "../level/biome/Biome.h"
#include "./SimpleTagIDFilterTest.h"
#include "../../unmapped/IWorldRegistriesProvider.h"
#include "../../unmapped/FilterContext.h"


class FilterTestBiomeHasTag : SimpleTagIDFilterTest {

public:
    virtual ~FilterTestBiomeHasTag();
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName()const;

    FilterTestBiomeHasTag();
    void _evalBiome(Biome const&, FilterContext const&)const;
};
