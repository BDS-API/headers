#pragma once

using namespace VanillaSurfaceBuilders;

class TheEndSurfaceBuilder : ISurfaceBuilder {

public:
    virtual void VanillaSurfaceBuilders::TheEndSurfaceBuilder::~TheEndSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    TheEndSurfaceBuilder(void);
};
