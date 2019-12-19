#pragma once

using namespace LayerFilters;

class Shore {

public:

    Shore(BiomeRegistry const&, Biome &);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderT<LayerDetails::LayerBase::initRandom(long, long)const::{lambda(long &, unsigned int)#1}>)const;
    void _isOcean(Biome &)const;
};
