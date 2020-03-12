#pragma once

#include "BiomeRegistry.h"
#include "../bedrock/level/biome/Biome.h"


namespace LayerFilters {

    class RiverInit {

    public:
//      void operator()(LayerDetails::NeighborhoodReader<Biome *, 0u, 0u> &, LayerDetails::RandomProviderTconst::{lambda(long<LayerDetails::LayerBase::initRandom(long, long> &, unsigned int)const; //TODO: incomplete function definition
        RiverInit(BiomeRegistry const&);
        ~RiverInit();
    };
}
