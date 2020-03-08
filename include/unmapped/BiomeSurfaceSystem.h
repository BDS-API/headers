#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/level/biome/Biome"
#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockVolume"


class BiomeSurfaceSystem {

public:

    void resolveBuilderImplementation(EntityRegistry &, SurfaceBuilderRegistry const&, unsigned int);
    void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
};
