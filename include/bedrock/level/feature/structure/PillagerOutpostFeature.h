#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry"


class PillagerOutpostFeature : StructureFeature {

public:
    virtual PillagerOutpostFeature::~PillagerOutpostFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    PillagerOutpostFeature(unsigned int);
};
