#pragma once

#include "../../../util/ChunkPos.h"
#include "../../chunksource/TheEndGenerator.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "StructureFeature.h"


class EndCityFeature : StructureFeature {

public:
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    ~EndCityFeature();
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    EndCityFeature(TheEndGenerator &, unsigned int &);
};
