#pragma once

class VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder : ISurfaceBuilder {

    virtual void ~OceanFrozenSurfaceBuilder();
    virtual void ~OceanFrozenSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
