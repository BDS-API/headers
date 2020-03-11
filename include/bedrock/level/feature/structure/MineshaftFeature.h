#pragma once

#include "./StructureFeature.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class MineshaftFeature : StructureFeature {

public:
    virtual ~MineshaftFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    MineshaftFeature(unsigned int);
};
