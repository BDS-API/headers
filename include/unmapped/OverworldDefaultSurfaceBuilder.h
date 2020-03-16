#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class OverworldDefaultSurfaceBuilder : public ISurfaceBuilder {

    public:
        virtual ~OverworldDefaultSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders30OverworldDefaultSurfaceBuilderD2Ev
        virtual void __fake_function0(); // fake
        virtual void init(EntityContext &, unsigned int); // _ZN22VanillaSurfaceBuilders30OverworldDefaultSurfaceBuilder4initER13EntityContextj
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders30OverworldDefaultSurfaceBuilder14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
        OverworldDefaultSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders30OverworldDefaultSurfaceBuilderC2Ev
    };
}
