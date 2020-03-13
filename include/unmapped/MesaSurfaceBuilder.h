#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class MesaSurfaceBuilder : ISurfaceBuilder {

    public:
        ~MesaSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders18MesaSurfaceBuilderD2Ev
        virtual void init(EntityContext &, unsigned int); // _ZN22VanillaSurfaceBuilders18MesaSurfaceBuilder4initER13EntityContextj
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders18MesaSurfaceBuilder14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
        MesaSurfaceBuilder(); // _ZN22VanillaSurfaceBuilders18MesaSurfaceBuilderC2Ev
        void getBand(int, int, int, PerlinSimplexNoise const&)const; // _ZNK22VanillaSurfaceBuilders18MesaSurfaceBuilder7getBandEiiiRK18PerlinSimplexNoise
        void generateBands(Random &); // _ZN22VanillaSurfaceBuilders18MesaSurfaceBuilder13generateBandsER6Random
    };
}
