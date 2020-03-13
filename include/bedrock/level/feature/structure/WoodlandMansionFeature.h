#pragma once

#include "StructureFeature.h"


class WoodlandMansionFeature : StructureFeature {

public:
    ~WoodlandMansionFeature(); // _ZN22WoodlandMansionFeatureD2Ev
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN22WoodlandMansionFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN22WoodlandMansionFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN22WoodlandMansionFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    WoodlandMansionFeature(OverworldGenerator &, unsigned int); // _ZN22WoodlandMansionFeatureC2ER18OverworldGeneratorj
};
