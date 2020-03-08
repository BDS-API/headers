#pragma once

#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"


class ShipwreckFeature : StructureFeature {

public:
    ShipwreckFeature::~ShipwreckFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    ShipwreckFeature(OceanMonumentFeature &, unsigned int);
    bool isShipwreckBeached(int);
};
