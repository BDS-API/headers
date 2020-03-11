#pragma once

#include "./BiomeRegistry.h"
#include "../bedrock/level/biome/Biome.h"


namespace LayerFilters {

class AddBiomeIsland {

public:

    ~AddBiomeIsland();
    AddBiomeIsland(BiomeRegistry const&, Biome &, Biome &);
//  void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderTconst::{lambda(long<LayerDetails::LayerBase::initRandom(long, long> &, unsigned int)const; //TODO: incomplete function definition
    void _isShallowOcean(Biome const&)const;
};

}