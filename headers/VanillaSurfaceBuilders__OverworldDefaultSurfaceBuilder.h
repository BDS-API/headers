#pragma once

class VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder : ISurfaceBuilder {

    virtual void ~OverworldDefaultSurfaceBuilder();
    virtual void ~OverworldDefaultSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
