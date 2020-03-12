#pragma once

#include "StructureFeature.h"


class PillagerOutpostFeature : StructureFeature {

public:
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    ~PillagerOutpostFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    PillagerOutpostFeature(unsigned int);
};
