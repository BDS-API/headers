#pragma once

class VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder : ISurfaceBuilder {

    virtual ~OverworldDefaultSurfaceBuilder();
    virtual ~OverworldDefaultSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
