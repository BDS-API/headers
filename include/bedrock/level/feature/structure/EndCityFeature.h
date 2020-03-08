#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/BiomeSource"
#include "../../chunksource/TheEndGenerator"


class EndCityFeature : StructureFeature {

public:
    virtual EndCityFeature::~EndCityFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    EndCityFeature(TheEndGenerator &, unsigned int &);
};
