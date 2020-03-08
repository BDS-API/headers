#pragma once

#include "../bedrock/level/biome/Biome"


using namespace LayerFilters;

class AddBiomeIsland {

public:

    AddBiomeIsland(BiomeRegistry const&, Biome &, Biome &);
    void operator()const;
    void _isShallowOcean(Biome const&)const;
};
