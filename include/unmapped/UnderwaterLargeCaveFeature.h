#pragma once

#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/Random"


class UnderwaterLargeCaveFeature : LargeCaveFeature {

public:
    UnderwaterLargeCaveFeature::~UnderwaterLargeCaveFeature()
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;

    UnderwaterLargeCaveFeature(void);
    bool isDiggable(Block const&);
};
