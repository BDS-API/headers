#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"
#include "../../chunksource/OverworldGenerator"


class WoodlandMansionFeature : StructureFeature {

public:
    virtual WoodlandMansionFeature::~WoodlandMansionFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    WoodlandMansionFeature(OverworldGenerator &, unsigned int);
};
