#pragma once

#include "../bedrock/level/biome/Biome"


using namespace VanillaSurfaceBuilders;

class SwampSurfaceBuilder : ISurfaceBuilder {

public:
    virtual void VanillaSurfaceBuilders::SwampSurfaceBuilder::~SwampSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    SwampSurfaceBuilder(void);
};
