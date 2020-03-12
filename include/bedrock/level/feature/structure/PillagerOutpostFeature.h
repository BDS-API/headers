#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "StructureFeature.h"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry.h"


class PillagerOutpostFeature : StructureFeature {

public:
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    ~PillagerOutpostFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    PillagerOutpostFeature(unsigned int);
};
