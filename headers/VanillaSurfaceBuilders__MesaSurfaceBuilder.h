#pragma once

class VanillaSurfaceBuilders::MesaSurfaceBuilder : ISurfaceBuilder {

public:
    virtual ~MesaSurfaceBuilder();
    virtual void init(EntityContext &, unsigned int);
    virtual void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);

    void MesaSurfaceBuilder(void);
    void getBand(int, int, int, PerlinSimplexNoise const&)const;
    void generateBands(Random &);
};
