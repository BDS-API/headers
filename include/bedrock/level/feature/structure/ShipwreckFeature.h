#pragma once

#include "StructureFeature.h"


class ShipwreckFeature : public StructureFeature {

public:
    virtual ~ShipwreckFeature(); // _ZN16ShipwreckFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN16ShipwreckFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN16ShipwreckFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN16ShipwreckFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    ShipwreckFeature(OceanMonumentFeature &, unsigned int); // _ZN16ShipwreckFeatureC2ER20OceanMonumentFeaturej
    bool isShipwreckBeached(int); // _ZN16ShipwreckFeature18isShipwreckBeachedEi
};
