#pragma once

class VanillaSurfaceBuilders::SwampSurfaceBuilder : ISurfaceBuilder {

    virtual ~SwampSurfaceBuilder();
    virtual ~SwampSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
