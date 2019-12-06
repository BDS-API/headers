#pragma once

class VanillaSurfaceBuilders::NetherSurfaceBuilder : ISurfaceBuilder {

public:
    virtual ~NetherSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    void NetherSurfaceBuilder(void);
};
