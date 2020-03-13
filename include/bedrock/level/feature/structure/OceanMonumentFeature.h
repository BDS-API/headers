#pragma once

#include "StructureFeature.h"


class OceanMonumentFeature : StructureFeature {

public:
    ~OceanMonumentFeature(); // _ZN20OceanMonumentFeatureD2Ev
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &); // _ZN20OceanMonumentFeature17initMobSpawnTypesER26HardcodedSpawnAreaRegistry
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN20OceanMonumentFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN20OceanMonumentFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN20OceanMonumentFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    OceanMonumentFeature(unsigned int); // _ZN20OceanMonumentFeatureC2Ej
};
