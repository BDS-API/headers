#pragma once

#include "StructureFeature.h"


class OceanRuinFeature : StructureFeature {

public:
    ~OceanRuinFeature(); // _ZN16OceanRuinFeatureD2Ev
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN16OceanRuinFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN16OceanRuinFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN16OceanRuinFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    OceanRuinFeature(OverworldGenerator &, OceanMonumentFeature &, unsigned int); // _ZN16OceanRuinFeatureC2ER18OverworldGeneratorR20OceanMonumentFeaturej
};
