#pragma once

#include "StructureFeature.h"


class BuriedTreasureFeature : StructureFeature {

public:
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    ~BuriedTreasureFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    BuriedTreasureFeature(unsigned int);
};
