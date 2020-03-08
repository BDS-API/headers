#pragma once

#include "../bedrock/level/biome/Biome"
#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"


using namespace VanillaSurfaceBuilders;

class MesaSurfaceBuilder : ISurfaceBuilder {

public:
    VanillaSurfaceBuilders::MesaSurfaceBuilder::~MesaSurfaceBuilder()
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    MesaSurfaceBuilder(void);
    void getBand(int, int, int, PerlinSimplexNoise const&)const;
    void generateBands(Random &);
};
