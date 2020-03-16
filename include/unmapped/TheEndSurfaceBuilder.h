#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class TheEndSurfaceBuilder : public ISurfaceBuilder {

    public:
        virtual ~TheEndSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders20TheEndSurfaceBuilderD2Ev
        virtual void __fake_function0(); // fake
        virtual void init(EntityContext &, unsigned int); // _ZN22VanillaSurfaceBuilders20TheEndSurfaceBuilder4initER13EntityContextj
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders20TheEndSurfaceBuilder14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
        TheEndSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders20TheEndSurfaceBuilderC2Ev
    };
}
