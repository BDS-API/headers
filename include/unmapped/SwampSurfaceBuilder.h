#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class SwampSurfaceBuilder : ISurfaceBuilder {

    public:
        ~SwampSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders19SwampSurfaceBuilderD2Ev
        virtual void init(EntityContext &, unsigned int); // _ZN22VanillaSurfaceBuilders19SwampSurfaceBuilder4initER13EntityContextj
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders19SwampSurfaceBuilder14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
        SwampSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders19SwampSurfaceBuilderC2Ev
    };
}
