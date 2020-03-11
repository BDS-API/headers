#pragma once

#include "./StructureFeature.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class VillageFeature : StructureFeature {

public:
    virtual ~VillageFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    VillageFeature(unsigned int);
};
