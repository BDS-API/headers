#pragma once

#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/BlockPos.h"
#include "ISurfaceBuilder.h"
#include "EntityContext.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/level/biome/Biome.h"


namespace VanillaSurfaceBuilders {

    class SwampSurfaceBuilder : ISurfaceBuilder {

    public:
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        ~SwampSurfaceBuilder();
        virtual void init(EntityContext &, unsigned int);
        SwampSurfaceBuilder();
    };
}
