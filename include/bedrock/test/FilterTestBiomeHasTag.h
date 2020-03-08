#pragma once

#include "../../unmapped/FilterContext"
#include "../../unmapped/IWorldRegistriesProvider"
#include "../level/biome/Biome"


class FilterTestBiomeHasTag : SimpleTagIDFilterTest {

public:
    virtual FilterTestBiomeHasTag::~FilterTestBiomeHasTag()
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName()const;

    FilterTestBiomeHasTag(void);
    void _evalBiome(Biome const&, FilterContext const&)const;
};
