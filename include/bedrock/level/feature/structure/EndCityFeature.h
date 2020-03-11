#pragma once

#include "./StructureFeature.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../chunksource/TheEndGenerator.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class EndCityFeature : StructureFeature {

public:
    virtual ~EndCityFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    EndCityFeature(TheEndGenerator &, unsigned int &);
};
