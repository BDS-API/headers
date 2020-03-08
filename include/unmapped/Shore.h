#pragma once

#include "../bedrock/level/biome/Biome"


using namespace LayerFilters;

class Shore {

public:

    Shore(BiomeRegistry const&, Biome &);
    void operator()const;
    void _isOcean(Biome &)const;
};
