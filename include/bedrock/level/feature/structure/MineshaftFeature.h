#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/BiomeSource"


class MineshaftFeature : StructureFeature {

public:
    virtual MineshaftFeature::~MineshaftFeature()
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    MineshaftFeature(unsigned int);
};
