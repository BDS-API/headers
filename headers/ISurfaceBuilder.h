#pragma once

class ISurfaceBuilder {

    virtual ~ISurfaceBuilder();
    virtual ~ISurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
