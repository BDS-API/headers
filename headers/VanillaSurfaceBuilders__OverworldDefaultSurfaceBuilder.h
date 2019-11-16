#pragma once

class VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder : ISurfaceBuilder {

    virtual void VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::~OverworldDefaultSurfaceBuilder();
    virtual void VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::~OverworldDefaultSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
