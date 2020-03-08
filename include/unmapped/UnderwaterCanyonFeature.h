#pragma once

#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/Random"


class UnderwaterCanyonFeature : CanyonFeature {

public:
    UnderwaterCanyonFeature::~UnderwaterCanyonFeature()
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const, -1l>)const;

    UnderwaterCanyonFeature(void);
};
