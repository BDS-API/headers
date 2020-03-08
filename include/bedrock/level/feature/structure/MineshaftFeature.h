#pragma once

#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"


class MineshaftFeature : StructureFeature {

public:
    MineshaftFeature::~MineshaftFeature()
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    MineshaftFeature(unsigned int);
};
