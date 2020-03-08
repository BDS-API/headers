#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"
#include "../../chunksource/OverworldGenerator"


class OceanRuinFeature : StructureFeature {

public:
    virtual OceanRuinFeature::~OceanRuinFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    OceanRuinFeature(OverworldGenerator &, OceanMonumentFeature &, unsigned int);
};
