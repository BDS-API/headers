#pragma once

class ISurfaceBuilder {

    virtual void ~ISurfaceBuilder();
    virtual void ~ISurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
