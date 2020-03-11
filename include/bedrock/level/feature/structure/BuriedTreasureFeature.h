#pragma once

#include "./StructureFeature.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class BuriedTreasureFeature : StructureFeature {

public:
    virtual ~BuriedTreasureFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    BuriedTreasureFeature(unsigned int);
};
