#pragma once

#include "BiomeSource.h"
#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/ChunkPos.h"
#include "CanyonFeature.h"
#include "../bedrock/util/Random.h"


class UnderwaterCanyonFeature : CanyonFeature {

public:
    ~UnderwaterCanyonFeature();
//  virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const, -1l>)const; //TODO: incomplete function definition
    UnderwaterCanyonFeature();
};
