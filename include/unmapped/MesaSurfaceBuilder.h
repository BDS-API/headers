#pragma once

#include "../bedrock/block/unmapped/BlockVolume.h"
#include "PerlinSimplexNoise.h"
#include "../bedrock/util/BlockPos.h"
#include "ISurfaceBuilder.h"
#include "EntityContext.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/level/biome/Biome.h"


namespace VanillaSurfaceBuilders {

    class MesaSurfaceBuilder : ISurfaceBuilder {

    public:
        virtual void init(EntityContext &, unsigned int);
        virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
        ~MesaSurfaceBuilder();
        MesaSurfaceBuilder();
        void generateBands(Random &);
        void getBand(int, int, int, PerlinSimplexNoise const&)const;
    };
}
