#pragma once

class LayerFilters::RiverInit {

public:

    void RiverInit(BiomeRegistry const&);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 0u, 0u> &, LayerDetails::RandomProviderT<LayerDetails::LayerBase::initRandom(long, long)const::{lambda(long &, unsigned int)#1}>)const;
};
