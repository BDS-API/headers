#pragma once

#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/BlockPos.h"
#include "ISurfaceBuilder.h"
#include "EntityContext.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/level/biome/Biome.h"


namespace VanillaSurfaceBuilders {

    class OverworldDefaultSurfaceBuilder : ISurfaceBuilder {

    public:
        virtual void init(EntityContext &, unsigned int);
        ~OverworldDefaultSurfaceBuilder();
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        OverworldDefaultSurfaceBuilder();
    };
}
