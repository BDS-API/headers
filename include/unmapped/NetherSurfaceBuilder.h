#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class NetherSurfaceBuilder : public ISurfaceBuilder {

    public:
        virtual ~NetherSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders20NetherSurfaceBuilderD2Ev
        virtual void __fake_function0(); // fake
        virtual void init(EntityContext &, unsigned int); // _ZN22VanillaSurfaceBuilders20NetherSurfaceBuilder4initER13EntityContextj
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders20NetherSurfaceBuilder14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
        NetherSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders20NetherSurfaceBuilderC2Ev
    };
}
