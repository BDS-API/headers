#pragma once

class VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder : ISurfaceBuilder {

    virtual void VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::~OceanFrozenSurfaceBuilder();
    virtual void VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::~OceanFrozenSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
