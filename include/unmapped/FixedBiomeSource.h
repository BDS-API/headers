#pragma once

#include "BiomeSource.h"


class FixedBiomeSource : BiomeSource {

public:
    virtual void getBiome(int, int)const;
//  virtual bool containsOnly(int, int, int, gsl::span<int const, -1l>)const; //TODO: incomplete function definition
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    ~FixedBiomeSource();
    virtual void fillBiomes(LevelChunk &)const;
    FixedBiomeSource(Biome const&);
};
