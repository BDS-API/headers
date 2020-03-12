#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "StructureFeature.h"


class MineshaftFeature : StructureFeature {

public:
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    ~MineshaftFeature();
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    MineshaftFeature(unsigned int);
};
