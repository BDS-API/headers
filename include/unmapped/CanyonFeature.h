#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockVolume"


class CanyonFeature {

public:
    virtual CanyonFeature::~CanyonFeature()
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const, -1l>)const;
    virtual void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);

    CanyonFeature(void);
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int);
    void detectWater(BlockVolume &, int, int, int, int, int, int)const;
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const;
};
