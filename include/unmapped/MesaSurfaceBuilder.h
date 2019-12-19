#pragma once

using namespace VanillaSurfaceBuilders;

class MesaSurfaceBuilder : ISurfaceBuilder {

public:
    virtual void VanillaSurfaceBuilders::MesaSurfaceBuilder::~MesaSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    MesaSurfaceBuilder(void);
    void getBand(int, int, int, PerlinSimplexNoise const&)const;
    void generateBands(Random &);
};
