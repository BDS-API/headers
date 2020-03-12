#pragma once

#include "StructureFeature.h"


class OceanMonumentFeature : StructureFeature {

public:
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    ~OceanMonumentFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    OceanMonumentFeature(unsigned int);
};
