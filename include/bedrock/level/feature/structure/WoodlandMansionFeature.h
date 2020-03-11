#pragma once

#include "./StructureFeature.h"
#include "../../../util/BlockPos.h"
#include "../../chunksource/OverworldGenerator.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class WoodlandMansionFeature : StructureFeature {

public:
    virtual ~WoodlandMansionFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    WoodlandMansionFeature(OverworldGenerator &, unsigned int);
};
