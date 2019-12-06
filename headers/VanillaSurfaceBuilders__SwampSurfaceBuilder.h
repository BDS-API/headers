#pragma once

class VanillaSurfaceBuilders::SwampSurfaceBuilder : ISurfaceBuilder {

public:
    virtual ~SwampSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    void SwampSurfaceBuilder(void);
};
