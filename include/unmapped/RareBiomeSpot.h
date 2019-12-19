#pragma once

using namespace LayerFilters;

class RareBiomeSpot {

public:

    RareBiomeSpot(unsigned int, Biome &, Biome &);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 0u, 0u> &, LayerDetails::RandomProviderT<LayerDetails::LayerBase::initRandom(long, long)const::{lambda(long &, unsigned int)#1}>)const;
};
