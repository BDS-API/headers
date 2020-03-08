#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/level/LevelChunk"
#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockVolume"


class LargeHellCaveFeature {

public:

    void addRoom(BlockVolume &, Random &, LevelChunk &, Vec3 const&)const;
    void addTunnel(BlockVolume &, Random &, LevelChunk &, Vec3 const&, float, float, float, int, int, float)const;
    void addFeature(BlockVolume &, LevelChunk &, Random &, int, int);
    void apply(unsigned int, BlockVolume &, LevelChunk &, Random &);
};
