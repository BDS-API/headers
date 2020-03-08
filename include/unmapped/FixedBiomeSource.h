#pragma once

#include "../bedrock/level/LevelChunk"
#include "../bedrock/level/biome/Biome"


class FixedBiomeSource : BiomeSource {

public:
    virtual FixedBiomeSource::~FixedBiomeSource();
    virtual void fillBiomes(LevelChunk &)const;
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    virtual bool containsOnly(int, int, int, gsl::span<int const, -1l>)const;
    virtual void getBiome(int, int)const;

    FixedBiomeSource(Biome const&);
};
