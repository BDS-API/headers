#pragma once

#include "../bedrock/level/biome/Biome"


using namespace LayerFilters;

class AddMushroomIsland {

public:

    AddMushroomIsland(Biome &, BiomeRegistry const&);
    void operator()const;
};
