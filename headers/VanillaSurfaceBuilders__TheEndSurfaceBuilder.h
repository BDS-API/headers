#pragma once

class VanillaSurfaceBuilders::TheEndSurfaceBuilder : ISurfaceBuilder {

    virtual void VanillaSurfaceBuilders::TheEndSurfaceBuilder::~TheEndSurfaceBuilder();
    virtual void VanillaSurfaceBuilders::TheEndSurfaceBuilder::~TheEndSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
