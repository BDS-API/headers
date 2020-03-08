#pragma once

#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../chunksource/OverworldGenerator"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"


class OceanRuinFeature : StructureFeature {

public:
    OceanRuinFeature::~OceanRuinFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    OceanRuinFeature(OverworldGenerator &, OceanMonumentFeature &, unsigned int);
};
