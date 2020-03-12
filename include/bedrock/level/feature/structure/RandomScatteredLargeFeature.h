#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "StructureFeature.h"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry.h"


class RandomScatteredLargeFeature : StructureFeature {

public:
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    ~RandomScatteredLargeFeature();
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    RandomScatteredLargeFeature(unsigned int);
};
