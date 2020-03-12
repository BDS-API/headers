#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class TheEndSurfaceBuilder : ISurfaceBuilder {

    public:
        ~TheEndSurfaceBuilder();
        virtual void init(EntityContext &, unsigned int);
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        TheEndSurfaceBuilder();
    };
}
