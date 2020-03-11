#pragma once

#include "./PerlinSimplexNoise.h"
#include "./ISurfaceBuilder.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/block/unmapped/BlockVolume.h"
#include "./EntityContext.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/level/biome/Biome.h"


namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder : ISurfaceBuilder {

public:
    virtual ~MesaSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    MesaSurfaceBuilder();
    void getBand(int, int, int, PerlinSimplexNoise const&)const;
    void generateBands(Random &);
};

}