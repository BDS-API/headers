#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../chunksource/OverworldGenerator"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/BiomeSource"


class OceanRuinFeature : StructureFeature {

public:
    virtual OceanRuinFeature::~OceanRuinFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    OceanRuinFeature(OverworldGenerator &, OceanMonumentFeature &, unsigned int);
};
