#pragma once

#include "StructureFeature.h"


class ShipwreckFeature : StructureFeature {

public:
    ~ShipwreckFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    bool isShipwreckBeached(int);
    ShipwreckFeature(OceanMonumentFeature &, unsigned int);
};
