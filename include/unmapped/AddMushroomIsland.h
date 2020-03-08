#pragma once

#include "../bedrock/level/biome/Biome"


using namespace LayerFilters;

class AddMushroomIsland {

public:

    AddMushroomIsland(Biome &, BiomeRegistry const&);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderT<LayerDetails::LayerBase::initRandom(long, long)const::{lambda(long &, unsigned int)#1}>)const;
};
