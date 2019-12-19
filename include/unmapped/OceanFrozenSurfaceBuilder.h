#pragma once

using namespace VanillaSurfaceBuilders;

class OceanFrozenSurfaceBuilder : ISurfaceBuilder {

public:
    virtual void VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::~OceanFrozenSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    OceanFrozenSurfaceBuilder(void);
};
