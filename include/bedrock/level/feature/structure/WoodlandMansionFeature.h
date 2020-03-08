#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../chunksource/OverworldGenerator"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/BiomeSource"


class WoodlandMansionFeature : StructureFeature {

public:
    virtual WoodlandMansionFeature::~WoodlandMansionFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    WoodlandMansionFeature(OverworldGenerator &, unsigned int);
};
