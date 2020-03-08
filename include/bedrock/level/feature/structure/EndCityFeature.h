#pragma once

#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../../util/Random"
#include "../../chunksource/TheEndGenerator"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"


class EndCityFeature : StructureFeature {

public:
    EndCityFeature::~EndCityFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    EndCityFeature(TheEndGenerator &, unsigned int &);
};
