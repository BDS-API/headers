#pragma once

class LayerFilters::RareBiomeSpot {

public:

    void RareBiomeSpot(unsigned int, Biome &, Biome &);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 0u, 0u> &, LayerDetails::RandomProviderT<LayerDetails::LayerBase::initRandom(long, long)const::{lambda(long &, unsigned int)#1}>)const;
};
