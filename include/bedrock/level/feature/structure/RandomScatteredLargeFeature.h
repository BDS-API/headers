#pragma once

#include "../../../../unmapped/HardcodedSpawnAreaRegistry"
#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"


class RandomScatteredLargeFeature : StructureFeature {

public:
    RandomScatteredLargeFeature::~RandomScatteredLargeFeature()
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    RandomScatteredLargeFeature(unsigned int);
};
