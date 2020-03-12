#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../chunksource/OverworldGenerator.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "StructureFeature.h"


class WoodlandMansionFeature : StructureFeature {

public:
    ~WoodlandMansionFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    WoodlandMansionFeature(OverworldGenerator &, unsigned int);
};
