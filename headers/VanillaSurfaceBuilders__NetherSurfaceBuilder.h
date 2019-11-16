#pragma once

class VanillaSurfaceBuilders::NetherSurfaceBuilder : ISurfaceBuilder {

    virtual void ~NetherSurfaceBuilder();
    virtual void ~NetherSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
