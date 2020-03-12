#pragma once

#include "StructureFeature.h"


class MineshaftFeature : StructureFeature {

public:
    ~MineshaftFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    MineshaftFeature(unsigned int);
};
