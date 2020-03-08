#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"
#include "../../../util/BlockPos"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry"


class RandomScatteredLargeFeature : StructureFeature {

public:
    virtual RandomScatteredLargeFeature::~RandomScatteredLargeFeature()
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    RandomScatteredLargeFeature(unsigned int);
};
