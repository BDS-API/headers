#pragma once

#include "../bedrock/level/biome/Biome"


using namespace LayerFilters;

class RareBiomeSpot {

public:

    RareBiomeSpot(unsigned int, Biome &, Biome &);
    void operator()const;
};
