#pragma once

using namespace VanillaSurfaceBuilders;

class OverworldDefaultSurfaceBuilder : ISurfaceBuilder {

public:
    virtual void VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::~OverworldDefaultSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    OverworldDefaultSurfaceBuilder(void);
};
