#pragma once

#include "StructureFeature.h"


class RandomScatteredLargeFeature : StructureFeature {

public:
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    ~RandomScatteredLargeFeature();
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    RandomScatteredLargeFeature(unsigned int);
};
