#pragma once

#include "StructureFeature.h"


class WoodlandMansionFeature : StructureFeature {

public:
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    ~WoodlandMansionFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    WoodlandMansionFeature(OverworldGenerator &, unsigned int);
};
