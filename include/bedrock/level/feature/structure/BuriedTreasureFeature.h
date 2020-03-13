#pragma once

#include "StructureFeature.h"


class BuriedTreasureFeature : StructureFeature {

public:
    ~BuriedTreasureFeature(); // _ZN21BuriedTreasureFeatureD2Ev
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN21BuriedTreasureFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN21BuriedTreasureFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN21BuriedTreasureFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    BuriedTreasureFeature(unsigned int); // _ZN21BuriedTreasureFeatureC2Ej
};
