#pragma once

class VanillaSurfaceBuilders::NetherSurfaceBuilder : ISurfaceBuilder {

    virtual void VanillaSurfaceBuilders::NetherSurfaceBuilder::~NetherSurfaceBuilder();
    virtual void VanillaSurfaceBuilders::NetherSurfaceBuilder::~NetherSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
