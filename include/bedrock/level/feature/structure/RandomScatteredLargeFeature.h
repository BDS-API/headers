#pragma once

#include "StructureFeature.h"


class RandomScatteredLargeFeature : StructureFeature {

public:
    ~RandomScatteredLargeFeature(); // _ZN27RandomScatteredLargeFeatureD2Ev
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &); // _ZN27RandomScatteredLargeFeature17initMobSpawnTypesER26HardcodedSpawnAreaRegistry
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN27RandomScatteredLargeFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN27RandomScatteredLargeFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN27RandomScatteredLargeFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    RandomScatteredLargeFeature(unsigned int); // _ZN27RandomScatteredLargeFeatureC2Ej
};
