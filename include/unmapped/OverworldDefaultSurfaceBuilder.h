#pragma once

#include "../bedrock/level/biome/Biome"
#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"


using namespace VanillaSurfaceBuilders;

class OverworldDefaultSurfaceBuilder : ISurfaceBuilder {

public:
    VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::~OverworldDefaultSurfaceBuilder()
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    OverworldDefaultSurfaceBuilder(void);
};
