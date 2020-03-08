#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/actor/Mob"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"


class RandomPos {

public:

    void getPos(Vec3 &, Mob &, int, int, int, SolidityCheckType);
    void generateRandomPos(Vec3 &, Mob &, int, int, Vec3*, bool, bool, int, SolidityCheckType);
    void getPosTowards(Vec3 &, Mob &, int, int, Vec3 const&);
    void getPosInDirection(Vec3 &, Mob &, int, int, int, bool, bool, Vec3*, IntRange const&, int, SolidityCheckType);
    void generateRandomPos(Vec3 &, Mob &, int, int, int, Vec3*, bool, bool, IntRange const&, int, SolidityCheckType);
    void getPosAvoid(Vec3 &, Mob &, int, int, Vec3 const&);
    void getSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int);
    void generateRandomSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int, Vec3*);
    void _choosePositionOffset(Random &, BlockPos &, int, int, int, Vec3 const*);
    void snapToGround(BlockPos &, Mob &, int, IntRange const&, SolidityCheckType);
    void snapToGround(BlockPos &, int, int, int, std::function<bool ()(BlockPos &)>);
    void snapToGround(BlockPos &, int, int, std::function<bool ()(BlockPos &)>);
    void _choosePositionOffset(Random &, BlockPos &, int, int);
    void spawnSnapToGround(BlockSource &, BlockPos &, float, int);
    void _choosePositionOffset(Random &, BlockPos &, int, int, int);
};
