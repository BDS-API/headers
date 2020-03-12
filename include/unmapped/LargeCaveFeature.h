#pragma once

#include "BiomeSource.h"
#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/ChunkPos.h"
#include "Block.h"
#include "../bedrock/util/Random.h"


class LargeCaveFeature {

public:
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;
    ~LargeCaveFeature();
//  void _thinSand(buffer_span<Block const*>, short, int)const; //TODO: incomplete function definition
    bool isDiggable(Block const&, Block const&);
    void addRoom(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&)const;
    void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const;
    void detectWater(BlockVolume &, int, int, int, int, int, int)const;
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int);
    LargeCaveFeature();
};
