#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class OverworldDefaultSurfaceBuilder : ISurfaceBuilder {

    public:
        ~OverworldDefaultSurfaceBuilder();
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        virtual void init(EntityContext &, unsigned int);
        OverworldDefaultSurfaceBuilder();
    };
}
