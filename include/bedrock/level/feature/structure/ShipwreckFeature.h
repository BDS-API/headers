#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include "OceanMonumentFeature.h"
#include "StructureFeature.h"


class ShipwreckFeature : StructureFeature {

public:
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    ~ShipwreckFeature();
    ShipwreckFeature(OceanMonumentFeature &, unsigned int);
    bool isShipwreckBeached(int);
};
