#pragma once

class VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder : ISurfaceBuilder {

public:
    virtual ~OceanFrozenSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    void OceanFrozenSurfaceBuilder(void);
};
