#pragma once

class VanillaSurfaceBuilders::MesaSurfaceBuilder : ISurfaceBuilder {

    virtual ~MesaSurfaceBuilder();
    virtual ~MesaSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
}
