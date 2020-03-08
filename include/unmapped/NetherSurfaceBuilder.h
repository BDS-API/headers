#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/level/biome/Biome"
#include "../bedrock/util/BlockPos"


using namespace VanillaSurfaceBuilders;

class NetherSurfaceBuilder : ISurfaceBuilder {

public:
    virtual VanillaSurfaceBuilders::NetherSurfaceBuilder::~NetherSurfaceBuilder()
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    NetherSurfaceBuilder(void);
};
