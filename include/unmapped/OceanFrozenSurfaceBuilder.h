#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class OceanFrozenSurfaceBuilder : ISurfaceBuilder {

    public:
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        ~OceanFrozenSurfaceBuilder();
        virtual void init(EntityContext &, unsigned int);
        OceanFrozenSurfaceBuilder();
    };
}
