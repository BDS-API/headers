#pragma once

#include "../bedrock/util/Vec3.h"
#include "./Block.h"
#include "./BiomeSource.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/block/unmapped/BlockVolume.h"


class LargeCaveFeature {

public:
    virtual ~LargeCaveFeature();
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;

    LargeCaveFeature();
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int);
    void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);
    void addRoom(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&)const;
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const;
//  void _thinSand(buffer_span<Block const*>, short, int)const; //TODO: incomplete function definition
    bool isDiggable(Block const&, Block const&);
    void detectWater(BlockVolume &, int, int, int, int, int, int)const;
};
