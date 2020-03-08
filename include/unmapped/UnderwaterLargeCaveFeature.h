#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockVolume"


class UnderwaterLargeCaveFeature : LargeCaveFeature {

public:
    virtual UnderwaterLargeCaveFeature::~UnderwaterLargeCaveFeature()
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;

    UnderwaterLargeCaveFeature(void);
    bool isDiggable(Block const&);
};
