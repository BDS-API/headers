#pragma once

#include "StructureFeature.h"


class PillagerOutpostFeature : StructureFeature {

public:
    ~PillagerOutpostFeature(); // _ZN22PillagerOutpostFeatureD2Ev
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &); // _ZN22PillagerOutpostFeature17initMobSpawnTypesER26HardcodedSpawnAreaRegistry
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN22PillagerOutpostFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN22PillagerOutpostFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN22PillagerOutpostFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    PillagerOutpostFeature(unsigned int); // _ZN22PillagerOutpostFeatureC2Ej
};
