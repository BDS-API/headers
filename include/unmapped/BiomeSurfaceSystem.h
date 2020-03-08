#pragma once

#include "../bedrock/level/biome/Biome"
#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"


class BiomeSurfaceSystem {

public:

    void resolveBuilderImplementation(EntityRegistry &, SurfaceBuilderRegistry const&, unsigned int);
    void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
};
