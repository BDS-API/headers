#pragma once

class LayerFilters::AddBiomeIsland {

public:

    void AddBiomeIsland(BiomeRegistry const&, Biome &, Biome &);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderT<LayerDetails::LayerBase::initRandom(long, long)const::{lambda(long &, unsigned int)#1}>)const;
    void _isShallowOcean(Biome const&)const;
};
