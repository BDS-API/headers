#pragma once

#include "../../unmapped/IWorldRegistriesProvider.h"
#include "../../unmapped/FilterContext.h"
#include "SimpleTagIDFilterTest.h"
#include "../level/biome/Biome.h"


class FilterTestBiomeHasTag : SimpleTagIDFilterTest {

public:
    ~FilterTestBiomeHasTag();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName()const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    FilterTestBiomeHasTag();
    void _evalBiome(Biome const&, FilterContext const&)const;
};
