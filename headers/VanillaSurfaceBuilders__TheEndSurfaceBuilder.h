#pragma once

class VanillaSurfaceBuilders::TheEndSurfaceBuilder : ISurfaceBuilder {

public:
    virtual ~TheEndSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    void TheEndSurfaceBuilder(void);
};
