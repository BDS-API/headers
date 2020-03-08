#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BiomeSource"
#include "../../../util/BlockPos"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/HardcodedSpawnAreaRegistry"


class OceanMonumentFeature : StructureFeature {

public:
    virtual OceanMonumentFeature::~OceanMonumentFeature()
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    OceanMonumentFeature(unsigned int);
};
