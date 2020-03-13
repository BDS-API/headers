#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class OceanFrozenSurfaceBuilder : ISurfaceBuilder {

    public:
        ~OceanFrozenSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilderD2Ev
        virtual void init(EntityContext &, unsigned int); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilder4initER13EntityContextj
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilder14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
        OceanFrozenSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilderC2Ev
    };
}
