#pragma once

#include "../bedrock/level/biome/Biome"


using namespace LayerFilters;

class BiomeInit {

public:

    BiomeInit(BiomeRegistry const&, Biome &, Biome &, GeneratorType);
    void operator()const;
};
