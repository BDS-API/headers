#pragma once

#include "../bedrock/level/LevelChunk.h"
#include "./BoundingBox.h"
#include "./BiomeSource.h"
#include "../bedrock/level/biome/Biome.h"


class FixedBiomeSource : BiomeSource {

public:
    virtual ~FixedBiomeSource();
    virtual void fillBiomes(LevelChunk &)const;
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
//  virtual bool containsOnly(int, int, int, gsl::span<int const, -1l>)const; //TODO: incomplete function definition
    virtual void getBiome(int, int)const;

    FixedBiomeSource(Biome const&);
};
