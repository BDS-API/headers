#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class SwampSurfaceBuilder : ISurfaceBuilder {

    public:
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        virtual void init(EntityContext &, unsigned int);
        ~SwampSurfaceBuilder();
        SwampSurfaceBuilder();
    };
}
