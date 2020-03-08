#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/BiomeSource"


class ShipwreckFeature : StructureFeature {

public:
    virtual ShipwreckFeature::~ShipwreckFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    ShipwreckFeature(OceanMonumentFeature &, unsigned int);
    bool isShipwreckBeached(int);
};
