#pragma once

class VanillaSurfaceBuilders::SwampSurfaceBuilder : ISurfaceBuilder {

    virtual void VanillaSurfaceBuilders::SwampSurfaceBuilder::~SwampSurfaceBuilder();
    virtual void VanillaSurfaceBuilders::SwampSurfaceBuilder::~SwampSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
