#pragma once

#include "BiomeRegistry.h"
#include "../bedrock/level/biome/Biome.h"


namespace LayerFilters {

    class Shore {

    public:
        Shore(BiomeRegistry const&, Biome &);
//      void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderTconst::{lambda(long<LayerDetails::LayerBase::initRandom(long, long> &, unsigned int)const; //TODO: incomplete function definition
        ~Shore();
        void _isOcean(Biome &)const;
    };
}
