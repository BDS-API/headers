#pragma once

#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/BlockPos.h"
#include "EntityRegistry.h"
#include "SurfaceBuilderRegistry.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/level/biome/Biome.h"


namespace BiomeSurfaceSystem {

    void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
    void resolveBuilderImplementation(EntityRegistry &, SurfaceBuilderRegistry const&, unsigned int);
};
