#pragma once

#include "./SurfaceBuilderRegistry.h"
#include "../bedrock/util/Random.h"
#include "./EntityRegistry.h"
#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/level/biome/Biome.h"


class BiomeSurfaceSystem {

public:

    void resolveBuilderImplementation(EntityRegistry &, SurfaceBuilderRegistry const&, unsigned int);
    void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
};
