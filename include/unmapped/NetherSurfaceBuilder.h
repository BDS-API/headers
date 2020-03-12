#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class NetherSurfaceBuilder : ISurfaceBuilder {

    public:
        ~NetherSurfaceBuilder();
        virtual void init(EntityContext &, unsigned int);
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        NetherSurfaceBuilder();
    };
}
