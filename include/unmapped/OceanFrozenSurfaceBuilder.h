#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class OceanFrozenSurfaceBuilder : public ISurfaceBuilder {

    public:
        virtual ~OceanFrozenSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilderD2Ev
        virtual void __fake_function0(); // fake
        virtual void init(EntityContext &, unsigned int); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilder4initER13EntityContextj
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilder14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
        OceanFrozenSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders25OceanFrozenSurfaceBuilderC2Ev
    };
}
