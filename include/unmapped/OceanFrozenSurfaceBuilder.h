#pragma once

#include "./ISurfaceBuilder.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/block/unmapped/BlockVolume.h"
#include "./EntityContext.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/level/biome/Biome.h"


namespace VanillaSurfaceBuilders {

class OceanFrozenSurfaceBuilder : ISurfaceBuilder {

public:
    virtual ~OceanFrozenSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    OceanFrozenSurfaceBuilder();
};

}