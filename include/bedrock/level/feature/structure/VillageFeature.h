#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"


class VillageFeature : StructureFeature {

public:
    virtual VillageFeature::~VillageFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    VillageFeature(unsigned int);
};
