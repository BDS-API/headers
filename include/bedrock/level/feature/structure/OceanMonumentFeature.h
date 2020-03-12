#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "StructureFeature.h"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry.h"


class OceanMonumentFeature : StructureFeature {

public:
    ~OceanMonumentFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    OceanMonumentFeature(unsigned int);
};
