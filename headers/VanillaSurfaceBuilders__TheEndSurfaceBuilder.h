#pragma once

class VanillaSurfaceBuilders::TheEndSurfaceBuilder : ISurfaceBuilder {

    virtual ~TheEndSurfaceBuilder();
    virtual ~TheEndSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
