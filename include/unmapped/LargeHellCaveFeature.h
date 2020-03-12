#pragma once

#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/level/LevelChunk.h"
#include "../bedrock/util/Vec3.h"


namespace LargeHellCaveFeature {

    void apply(unsigned int, BlockVolume &, LevelChunk &, Random &);
    void addTunnel(BlockVolume &, Random &, LevelChunk &, Vec3 const&, float, float, float, int, int, float)const;
    void addRoom(BlockVolume &, Random &, LevelChunk &, Vec3 const&)const;
    void addFeature(BlockVolume &, LevelChunk &, Random &, int, int);
};
