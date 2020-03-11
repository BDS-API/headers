#pragma once

#include "../bedrock/util/Vec3.h"
#include "./Block.h"
#include "./BiomeSource.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/block/unmapped/BlockVolume.h"
#include "./LargeCaveFeature.h"


class UnderwaterLargeCaveFeature : LargeCaveFeature {

public:
    virtual ~UnderwaterLargeCaveFeature();
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;

    UnderwaterLargeCaveFeature();
    bool isDiggable(Block const&);
};
