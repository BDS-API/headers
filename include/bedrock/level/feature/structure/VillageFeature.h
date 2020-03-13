#pragma once

#include "StructureFeature.h"


class VillageFeature : StructureFeature {

public:
    ~VillageFeature(); // _ZN14VillageFeatureD2Ev
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN14VillageFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN14VillageFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN14VillageFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    VillageFeature(unsigned int); // _ZN14VillageFeatureC2Ej
};
