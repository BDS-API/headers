#pragma once

#include "../bedrock/level/biome/Biome"


using namespace LayerFilters;

class PromoteCenter {

public:

    PromoteCenter(Biome &, Biome &);
    void operator()const;
};
