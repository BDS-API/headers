#pragma once

#include "../bedrock/level/biome/Biome.h"


namespace LayerFilters {

class PromoteCenter {

public:

    PromoteCenter(Biome &, Biome &);
//  void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &)const; //TODO: incomplete function definition
};

}