#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockVolume"


class LargeCaveFeature {

public:
    virtual LargeCaveFeature::~LargeCaveFeature()
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;

    LargeCaveFeature(void);
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int);
    void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);
    void addRoom(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&)const;
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const;
    void _thinSand(buffer_span<Block const*>, short, int)const;
    bool isDiggable(Block const&, Block const&);
    void detectWater(BlockVolume &, int, int, int, int, int, int)const;
};
