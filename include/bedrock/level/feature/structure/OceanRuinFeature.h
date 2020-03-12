#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../chunksource/OverworldGenerator.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "OceanMonumentFeature.h"
#include "StructureFeature.h"


class OceanRuinFeature : StructureFeature {

public:
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    ~OceanRuinFeature();
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    OceanRuinFeature(OverworldGenerator &, OceanMonumentFeature &, unsigned int);
};
