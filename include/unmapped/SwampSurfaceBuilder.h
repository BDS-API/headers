#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/level/biome/Biome"
#include "../bedrock/util/BlockPos"


using namespace VanillaSurfaceBuilders;

class SwampSurfaceBuilder : ISurfaceBuilder {

public:
    virtual VanillaSurfaceBuilders::SwampSurfaceBuilder::~SwampSurfaceBuilder()
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    SwampSurfaceBuilder(void);
};
