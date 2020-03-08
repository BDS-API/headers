#pragma once

#include "../bedrock/level/biome/Biome"


using namespace VanillaSurfaceBuilders;

class NetherSurfaceBuilder : ISurfaceBuilder {

public:
    virtual void VanillaSurfaceBuilders::NetherSurfaceBuilder::~NetherSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    NetherSurfaceBuilder(void);
};
