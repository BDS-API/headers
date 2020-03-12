#pragma once

#include "ISurfaceBuilder.h"


namespace VanillaSurfaceBuilders {

    class MesaSurfaceBuilder : ISurfaceBuilder {

    public:
        ~MesaSurfaceBuilder();
        virtual void init(EntityContext &, unsigned int);
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        MesaSurfaceBuilder();
        void getBand(int, int, int, PerlinSimplexNoise const&)const;
        void generateBands(Random &);
    };
}
